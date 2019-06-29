#
# GameFW
# (c) 2019 modeco80 under applicable license.
#

cmake_minimum_required(VERSION 3.0)

project(GameFW CXX)
if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

# framework DLL sources (TODO)
#add_subdirectory(src/framework)


# Game
add_subdirectory(src/game)