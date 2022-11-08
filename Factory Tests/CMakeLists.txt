cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp Army.cpp Army.h Navy.cpp Navy.h AirForce.cpp AirForce.h Military.h ArmyFactory.cpp ArmyFactory.h NavyFactory.cpp NavyFactory.h AirForceFactory.cpp AirForceFactory.h MilitaryFactory.h)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
