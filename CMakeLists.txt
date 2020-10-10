cmake_minimum_required(VERSION 2.8)

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME task1) 
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall")

# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
# set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)

#----------------------------------------------------------------------------
# Define project sources and includes
#----------------------------------------------------------------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)


set(SRC_FILES1 ${PROJECT_SOURCE_DIR}/src/task1.cpp include/task1.h src/task1.cpp src/main1.cpp include/task2.h)
set(SRC_FILES2 ${PROJECT_SOURCE_DIR}/src/task2.cpp)
set(SRC_FILES3 ${PROJECT_SOURCE_DIR}/src/task2.cpp
               ${PROJECT_SOURCE_DIR}/src/task3.cpp)              
set(SRC_FILES4 ${PROJECT_SOURCE_DIR}/src/task4.cpp)
set(SRC_FILES5 ${PROJECT_SOURCE_DIR}/src/task5.cpp)

set(CMAKE_CXX_STANDARD 11)

add_library(task1_lib ${SRC_FILES1})
add_library(task2_lib ${SRC_FILES2})
add_library(task3_lib ${SRC_FILES3})
add_library(task4_lib ${SRC_FILES4})
add_library(task5_lib ${SRC_FILES5})

add_executable(task1 ${PROJECT_SOURCE_DIR}/src/main1.cpp)
add_executable(task2 ${PROJECT_SOURCE_DIR}/src/main2.cpp)
add_executable(task3 ${PROJECT_SOURCE_DIR}/src/main3.cpp)
add_executable(task4 ${PROJECT_SOURCE_DIR}/src/main4.cpp)
add_executable(task5 ${PROJECT_SOURCE_DIR}/src/main5.cpp)

target_link_libraries(task1 task1_lib)
target_link_libraries(task2 task2_lib)
target_link_libraries(task3 task3_lib)
target_link_libraries(task4 task4_lib)
target_link_libraries(task5 task5_lib)

################################
# Testing
################################

# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(BUILD_TESTS "Build all tests." OFF) # Makes boolean 'test' available.

if (BUILD_TESTS)
  # This adds another subdirectory, which has 'project(gtest)'.
  add_subdirectory(ext/gtest-1.8.0)

  enable_testing()

  # Include the gtest library. gtest_SOURCE_DIR is available due to
  # 'project(gtest)' above.
  include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

  ##############
  # Unit Tests
  ##############
  add_executable(runUnitTests ${TEST_SRC_FILES})

  # Standard linking to gtest stuff.
  target_link_libraries(runUnitTests gtest gtest_main)

  # Extra linking for the project.
  target_link_libraries(runUnitTests task1_lib task2_lib task3_lib task4_lib task5_lib)

  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
  add_test(UnitTests runUnitTests)

  set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/.travis/cmake)

  if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
    include(CodeCoverage)
    setup_target_for_coverage(${PROJECT_NAME}_coverage runUnitTests coverage)

    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"

endif()
