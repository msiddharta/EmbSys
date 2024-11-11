# library for greet()
add_library(ringbuffer src/RingBufferImpl.cpp)
target_include_directories(ringbuffer PUBLIC include)

if(UNIX)
    list(APPEND OS_LIBS pthread)
endif()

# test executable testing the library
add_executable(ringbuffer_test
test/main.cpp
test/RingBufferTest.cpp
)

target_include_directories(ringbuffer_test PUBLIC include)

target_link_libraries(ringbuffer_test PRIVATE ringbuffer ${OS_LIBS})

catch_discover_tests(ringbuffer_test)