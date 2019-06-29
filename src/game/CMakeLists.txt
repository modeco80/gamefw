#
# GameFW
# (c) 2019 modeco80 under applicable license.
#

file(GLOB_RECURSE GAME_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)
add_executable(gamefw_game WIN32 ${GAME_SOURCES})
target_include_directories(gamefw_game PRIVATE ${PROJECT_SOURCE_DIR}/include)
set_target_properties(gamefw_game PROPERTIES
	CXX_STANDARD 11
	CXX_STANDARD_REQUIRED ON
)