# Validate if the folder exists
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${CONFIG_NAME}/CMakeLists.txt")
    message(STATUS "Building config: ${CONFIG_NAME}")
    add_subdirectory(${CONFIG_NAME})
else()
    message(FATAL_ERROR "Configuration '${CONFIG_NAME}' not found in /code.")
endif()
