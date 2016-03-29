cmake_minimum_required(VERSION 3.4)
project(Watermark)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#add_definitions(-D__WXMSW__ -DWXUSINGDLL=1 -DNO_GCC_PRAGMA -DGUI)

include_directories(D:\\Develop\\Cpp\\wxWidgets-3.1.0\\include D:\\Develop\\Cpp\\wxWidgets-3.1.0\\lib\\gcc_dll\\mswu)

set(CMAKE_SHARED_LINKER_FLAGS "-mwindows")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "C:\\Users\\krisz\\ClionProjects\\Watermark\\Build")
set ( PROJECT_LINK_LIBS wxmsw310u_gcc_sektor.dll )
link_directories(d:\\Develop\\Cpp\\wxWidgets-3.1.0\\lib\\gcc_dll)

file(GLOB SOURCE_FILES "*.cpp")

add_executable(Watermark WIN32 ${SOURCE_FILES} resources.rc) #WIN32 miatt tünik el a console
target_link_libraries(Watermark ${PROJECT_LINK_LIBS})
