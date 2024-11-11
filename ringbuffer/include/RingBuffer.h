#pragma once

#include <string>
#include <cstdint>

class RingBuffer
{
    public:
        virtual bool Insert(const std::string &item) = 0; //=0 bedeutet es wird eine Interface gebildet und diese functionen müssen gegeben sein    
        virtual bool Remove(std::string &item) = 0;

        virtual int32_t Capacity() const = 0;       // const am ende: Diese function verändert den Wert des Ringbuffers nicht
        virtual int32_t Occupancy() const = 0;

    private:
};