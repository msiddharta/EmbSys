#include "RingBufferImpl.h"
#include <cstdint>

using namespace std;

const int32_t RingBufferImpl::DefaultCapacity = 100;

RingBufferImpl::RingBufferImpl(int32_t capacity) : 
    fullSlots(0), emptySlots(capacity)
{
    m_capacity = capacity;
    m_buffer.resize(capacity);
}

RingBufferImpl::~RingBufferImpl()
{/*Good to write: as a reminder. That the destructor not was not forgotten*/}


bool RingBufferImpl::Insert(const std::string &item)
{
    bool res = emptySlots.acquire(10ms);
    if (res == false) return false;

    //lock guard da beim verlassen dieser der lock freigegeben wird
    {
        lock_guard<mutex> guard(insert_mutex);

        m_buffer[nextInputPos] = item;
        nextInputPos = (nextInputPos + 1) % m_capacity;
    }
    //lock wurde freigegeben, da der lokalen Block zu ende ist, wie ein function-block

    fullSlots.release();
    return true;
}

bool RingBufferImpl::Remove(std::string &item)
{
    item.clear();

    bool res = fullSlots.acquire(10ms);
    if( res == false) return false;

    {
        lock_guard<mutex> guard(extract_mutex);

        item = m_buffer[nextOutputPos];
        nextOutputPos = (nextOutputPos + 1) % m_capacity;
    }

    emptySlots.release();
    return true;
}