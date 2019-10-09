cmake_minimum_required(VERSION 2.8.3)
project({{cookiecutter.package_name}})

add_compile_options(-std=c++14)

find_package(catkin_simple REQUIRED)

catkin_simple()

cs_add_library(${PROJECT_NAME} src/${PROJECT_NAME}/{{cookiecutter.class_name_snake_case}}.cpp)

# Use the following for a header only library:
# add_library(${PROJECT_NAME} INTERFACE)
# target_link_libraries(${PROJECT_NAME} INTERFACE ${catkin_LIBRARIES})

# Use the following to add an executable:
# cs_add_executable(example_executable src/example_executable.cpp)
# target_link_libraries(example_executable ${PROJECT_NAME})

cs_install()

cs_export()
