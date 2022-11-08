cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests main.cpp AttackStrategy.h DefenseStrategy.h AirborneAttack.cpp AirborneAttack.h Ambush.cpp Ambush.h Blockade.cpp Blockade.h Minefield.cpp Minefield.h Retreat.cpp Retreat.h attackCommand.h attackCommand.cpp DefendCommand.h DefendCommand.cpp HigherPowers.h HigherPowers.cpp Command.h Command.cpp Military.h Army.h Army.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
