#Set CMake minimum version
cmake_minimum_required( VERSION 3.10 )

#Set project name and version
project(SkyrimModAssistant VERSION 0.0.1 LANGUAGES CXX)

#Add Qt as dependency(Note: don't use '\', use '/')
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
	set(Qt5_DIR D:/Qt/Qt5.14.2/5.14.2/msvc2017_64/lib/cmake/Qt5)
endif()
find_package(Qt5 COMPONENTS Widgets REQUIRED)

#Setup Qt compile tools
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#Official code, don't know why is needed
if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

#Set Headers folder
#file(GLOB_RECURSE header_files Headers/*.h)
#Set Sources folder
#file(GLOB_RECURSE source_files Sources/*.cpp)
#Add to executable
#add_executable(SkyrimModAssistant main.cpp ${header_files} ${source_files})

#Add main.cpp as executable file
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
	add_executable(SkyrimModAssistant WIN32 main.cpp)
endif()

#Link libraries
target_link_libraries(SkyrimModAssistant Qt5::Widgets)