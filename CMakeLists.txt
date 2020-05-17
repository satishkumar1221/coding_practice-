#Minimim cmake version required 
CMAKE_MINIMUM_REQUIRED(VERSION 3.8)
#Compiler Minimum Version Required
set(CMAKE_CXX_STANDARD 17)
#Add the debug file or enable thje debugger
set(CMAKE_BUILD_TYPE Debug)
#project name 
project(programming_projects)
# Additional Libraries May include NVIDIA or any third party libararies.  

#include directories 
include_directories(Include)
include_directories(const)
#include_directories(${PROJECT_SOURCE_DIR}/Source)

#Build Rules  
file(GLOB SOURCES "Source/*.cpp")

#overall object file 
#add_executable 
add_executable(programming_projects ${SOURCES})