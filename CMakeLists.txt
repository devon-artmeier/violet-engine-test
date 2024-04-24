cmake_minimum_required(VERSION 3.16)
project(violet-engine-test LANGUAGES C CXX)

list(APPEND VIOLET_TEST_SRC
    "source/main.cpp"
)

add_executable(violet-engine-test ${VIOLET_TEST_SRC})

target_compile_definitions(violet-engine-test PRIVATE $<$<CONFIG:Debug>:VIOLET_TEST_DEBUG>)

if(WIN32)
    set_target_properties(violet-engine-test PROPERTIES WIN32_EXECUTABLE $<CONFIG:Release>)
endif()

add_subdirectory("violet-engine")
target_link_libraries(violet-engine-test PRIVATE violet-engine)
target_include_directories(violet-engine-test PRIVATE "violet-engine/include")

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/data" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
file(COPY "${CMAKE_CURRENT_BINARY_DIR}/violet-engine/dependencies/SDL/SDL3.dll" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")