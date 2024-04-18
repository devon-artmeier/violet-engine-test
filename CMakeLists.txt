cmake_minimum_required(VERSION 3.16)
project(violet-engine-test LANGUAGES C CXX)

add_executable(violet-engine-test
	"source/test.cpp"
)

add_subdirectory("violet-engine" EXCLUDE_FROM_ALL)
target_link_libraries(violet-engine-test PRIVATE violet-engine)
target_include_directories(violet-engine-test PRIVATE "violet-engine/source")