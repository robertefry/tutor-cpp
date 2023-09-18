
cmake_minimum_required(VERSION 3.12)

# ---- binary ----

set(LIBRARY_NAME "project-lib")
add_library(${LIBRARY_NAME} SHARED "")
opt_declare_project_target(${LIBRARY_NAME})

# ---- compiler targets ----

target_include_directories(${LIBRARY_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

file(GLOB_RECURSE GLOB_SOURCES CONFIGURE_DEPENDS
  "src/*.c" "src/*.cc" "src/*.cpp" "src/*.cxx")
target_sources(${LIBRARY_NAME} PRIVATE ${GLOB_SOURCES})

# ---- testing ----

add_subdirectory(tests)
