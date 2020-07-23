cmake_minimum_required(VERSION 3.16)
project(Game)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS}, ${SDL2_IMAGE_INCLUDE_DIRS})

add_executable(Game src/main.cpp src/RenderWindow.cpp src/RenderWindow.h src/Player.cpp src/Player.h src/GameLoopHandler.cpp src/GameLoopHandler.h)
target_link_libraries(Game ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})