cmake_minimum_required( VERSION 3.5 )
project( demo )

set(CMAKE_CXX_FLAGS "-O2 -Wall -std=c++17")

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIR} )

find_package( Eigen3 REQUIRED )
include_directories( ${EIGEN3_INCLUDE_DIR} )

find_package( Boost REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )

include_directories(include)

add_executable(demo
    src/demo.cpp
    src/window.cpp
    src/label_parser.cpp
    src/utils.cpp
    src/calib_parser.cpp
    src/detection.cpp)

target_link_libraries( demo ${OpenCV_LIBS} )
