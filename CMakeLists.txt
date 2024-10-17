cmake_minimum_required(VERSION 3.27)

project(midterm_project LANGUAGES C CXX)


# Set C++ compiler options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(${PROJECT_NAME} src/main.cpp )
target_sources(${PROJECT_NAME} PRIVATE src/MyClass.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC "inc" "src")


if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds are not allowed")
endif()

