cmake_minimum_required(VERSION 3.14..3.17)

project({%PROJECT_NAME%} VERSION 1.0
    LANGUAGES CXX)

# Setup test harness
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    # ensure -std=c++xx instead of -std=g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)

    include(CTest)

    find_package(Doxygen)
    if(Doxygen_FOUND)
        add_subdirectory(docs)
    else()
        message(STATUS "Doxygen not found, not building docs")
    endif()
endif()

include(FetchContent)

FetchContent_Declare(fmtlib
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG master)
FetchContent_MakeAvailable(fmtlib)

add_subdirectory(src)
add_subdirectory(bin)

# only enable tests if this is the main project
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    add_subdirectory(tests)
endif()
