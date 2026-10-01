cmake_minimum_required(VERSION 3.14)
project(MathDemo)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    json
    URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
)
FetchContent_MakeAvailable(json)

add_executable(mathdemo
    main.cpp
    file1.cpp
    file2.cpp
    file3.cpp
    file4.cpp
    file5.cpp
    file6.cpp
)

target_link_libraries(mathdemo PRIVATE nlohmann_json::nlohmann_json)
