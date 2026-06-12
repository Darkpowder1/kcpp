cmake_minimum_required(VERSION 4.3 FATAL_ERROR)
project(main-kcpp)

# recourse pozwala na foldery takie jak ZadStudent
file(GLOB_RECURSE SOURCES "src/*.cc")

foreach(SRC_FILE IN LISTS SOURCES)

    # filename without extension
    get_filename_component(TARGET_NAME ${SRC_FILE} NAME_WE)

    # build the file
    add_executable(${TARGET_NAME} ${SRC_FILE})
    
    # handle include
    target_include_directories(${TARGET_NAME} PRIVATE include)

endforeach()