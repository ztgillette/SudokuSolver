cmake_minimum_required(VERSION 3.26)
project(SFMLtutorial)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 17)

add_executable(SFMLtutorial main.cpp
        board.cpp
        board.h)

target_link_libraries(SFMLtutorial sfml-graphics)