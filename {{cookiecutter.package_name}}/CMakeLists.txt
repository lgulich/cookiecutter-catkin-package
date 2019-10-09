cmake_minimum_required(VERSION 2.8.3)
project({{cookiecutter.package_name}})

add_compile_options(-std=c++14)

find_package(catkin_simple REQUIRED)

catkin_simple()

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)

cs_add_library({{cookiecutter.package_name}} src/{{cookiecutter.package_name}}/{{cookiecutter.class}}.cpp)
target_link_libraries({{cookiecutter.package_name}} ${catkin_LIBRARIES})

# cs_add_executable(example_executable src/example_executable.cpp)

cs_install()

cs_export()
