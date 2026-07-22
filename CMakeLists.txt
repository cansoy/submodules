cmake_minimum_required(VERSION 3.20)

project(submodule_add)

add_subdirectory(third_party)

add_library(
    my_math_lib
    src/my_math.cpp
)

target_include_directories(
    my_math_lib
    PUBLIC
    include
)

add_executable(
    app_output
    main.cpp
)

target_link_libraries(
    app_output
    PRIVATE
    my_math_lib
    math_utils_lib
    nlohmann_json
)