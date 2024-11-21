#include <catch2/catch.hpp>
#include "RingBufferImpl.h"

using namespace std;

TEST_CASE("a new ringbuffer is empty")
{
    GIVEN("a new ringbuffer")
    {
        RingBufferImpl uut;

        WHEN("checked for content")
        {
            int32_t capacity = uut.Capacity();
            int32_t occupancy = uut.Occupancy();

            THEN("it is empty and has default capacity")
            {
                REQUIRE(occupancy == 0);
                REQUIRE(capacity == 100);
            }
        }
    }
}

// adding one item succeeds if the buffer is not full

// adding one item fails if the buffer is full

// an item can be removed from non-empty buffer

// removing an item from empty buffer fails

// the order of items is preserved

// when inserting and removing items continuously the order of items is preserved
// (check that wrap around works)