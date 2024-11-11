#pragma once

#include "RingBuffer.h"
#include "semaphore.h"
#include <cstdint>

#include <vector>

class RingBufferImpl : public RingBuffer
{
    public:

        RingBufferImpl(int32_t capacity = DefaultCapacity);
        ~RingBufferImpl();
        
        virtual bool Insert(const std::string &item);    
        virtual bool Remove(std::string &item);

        virtual int32_t Capacity() const {return m_capacity;};
        virtual int32_t Occupancy() const {return fullSlots.value();};

    private:

        static const int32_t DefaultCapacity;

        std::vector<std::string> m_buffer;  //wie array of string 

        Semaphore emptySlots;
        Semaphore fullSlots;

        int32_t m_capacity;

        int32_t nextInputPos = 0;
        int32_t nextOutputPos = 0;

        std::mutex insert_mutex;
        std::mutex extract_mutex;
};