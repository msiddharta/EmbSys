add_executable(greet
src/main.cpp 
src/greeting.cpp 
)

target_include_directories(greet PUBLIC include)