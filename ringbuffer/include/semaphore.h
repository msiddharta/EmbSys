#pragma once

#include <cstdint>
#include <atomic>
#include <chrono>
#include <mutex>
#include <condition_variable>

class Semaphore
{
    public:
    Semaphore(int32_t count = 0)
    {
        m_count = count;
    }

    int32_t value() const
    {
        return m_count;
    }

    bool acquire(const std::chrono::milliseconds & timeout)
    {
        //lokales Objekt am ende der Funktion wird das Objekt gelöscht und Speicherbereich freigegeben 
        std::unique_lock<std::mutex> lock(m_mutex);
        while(m_count == 0)
        {
            //wait_for hebt den lock auf bis .. frei ist, oder timeout
            std::cv_status res = m_cv.wait_for(lock, timeout);
            if(res == std::cv_status::timeout)
                return false;
        }
        m_count --;
        return true;
    }

    void release()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_count ++;

        m_cv.notify_one();
    }

    private:
        std::atomic<int32_t> m_count;
        std::mutex m_mutex;
        std::condition_variable m_cv;
};