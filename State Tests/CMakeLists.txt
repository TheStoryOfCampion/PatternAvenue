cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp Reserve.cpp Reserve.h Enlisted.cpp Enlisted.h Fleeing.cpp Fleeing.h Refugee.cpp Refugee.h CivilianContext.cpp CivilianContext.h CivilianState.h)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
