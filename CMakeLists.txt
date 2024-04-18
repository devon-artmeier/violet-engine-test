cmake_minimum_required(VERSION 3.16)
project(violet-engine-test LANGUAGES C CXX)

list(APPEND VIOLET_SRC
	"source/test.cpp"
)

if(WIN32 AND NOT CONFIG:Debug)
	add_executable(violet-engine-test WIN32 ${VIOLET_SRC})
else()
	add_executable(violet-engine-test ${VIOLET_SRC})
endif()
	
add_subdirectory("violet-engine" EXCLUDE_FROM_ALL)
target_link_libraries(violet-engine-test PRIVATE violet-engine)
target_include_directories(violet-engine-test PRIVATE "violet-engine/include")