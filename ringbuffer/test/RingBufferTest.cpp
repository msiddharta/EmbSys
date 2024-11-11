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