#projection name
project(testOpencvCmake)
#dir of the code
aux_source_directory(. DIR_SRCS)
#debug mode
set(CMAKE_Cxx_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g -ggdb")
#release mode 
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
#generate exe
add_executable(hellowd ${DIR_SRCS})
#add sub dir
add_subdirectory(subsrc)
#add lib
target_link_libraries(hellowd funclib)
#add opencv
find_package(OpenCV REQUIRED)
include_directories(
    ${OpenCV_INCLUDE_DIRS}
)
target_link_libraries(hellowd ${OpenCV_LIBS})
