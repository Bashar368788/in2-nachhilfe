cmake_minimum_required(VERSION 3.12)
project(CppCourse)

# Let users select which config/subproject to work on
set(CONFIG_NAME "pointers-functions" CACHE STRING "Which code config to build (subfolder in /code)")

# Add the code directory, and pass control to it
add_subdirectory(code)
