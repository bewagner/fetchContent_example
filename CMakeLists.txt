cmake_minimum_required(VERSION 3.14)
project(fetchContent_example CXX)

include(FetchContent)

FetchContent_Declare(
        DocTest
        GIT_REPOSITORY "https://github.com/onqtam/doctest"
        GIT_TAG "932a2ca50666138256dae56fbb16db3b1cae133a"
)
FetchContent_Declare(
        Range-v3
        GIT_REPOSITORY "https://github.com/ericniebler/range-v3"
        GIT_TAG "4d6a463bca51bc316f9b565edd94e82388206093"
)

FetchContent_MakeAvailable(DocTest Range-v3)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} doctest range-v3)
