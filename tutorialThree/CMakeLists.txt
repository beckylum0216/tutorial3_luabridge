# CMakeList.txt : CMake project for tutorialThree, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/tutorialThree")
set(luabridge_DIR "${CMAKE_SOURCE_DIR}/includes")
set(LUA_LIBRARIES "${CMAKE_SOURCE_DIR}/libs/lua")
set(LUA_INCLUDE_DIR "${CMAKE_SOURCE}/includes")

MESSAGE(STATUS ${CMAKE_SOURCE_DIR})

include(FindLua)

find_package(lua REQUIRED)

# Add source to this project's executable.
add_executable (tutorialThree   "tutorialThree.cpp" "tutorialThree.h"
                                Intro.cpp Intro.hpp
                                Task2.cpp Task2.hpp
                                Task3.cpp Task3.hpp
                                Task4.cpp Task4.hpp
                                Task5.cpp Task5.hpp)

target_include_directories(tutorialThree PUBLIC ${luabridge_DIR} PRIVATE ${LUA_INCLUDE_DIR})
target_link_libraries(tutorialThree PRIVATE ${LUA_LIBRARIES})

# TODO: Add tests and install targets if needed.
