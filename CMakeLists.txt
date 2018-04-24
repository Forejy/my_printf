cmake_minimum_required(VERSION 3.9)
project(Printf C)

set(CMAKE_C_STANDARD 99)

#set(CMAKE_C_FLAGS "-Wall -Wextra -Werror")

set(SOURCES ${SOURCES} Sources/main.c
        "Sources/Fct param opt.c" "Sources/Fct param opt.h" Sources/Printf.c Sources/Printf.h Sources/errors.c Sources/errors.h)

add_subdirectory(libft)

add_executable(Printf ${SOURCES})

target_include_directories(Printf PRIVATE libft)
target_link_libraries(Printf PRIVATE ft)

set(EXECUTABLE_OUTPUT_PATH ..)