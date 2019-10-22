cmake_minimum_required(VERSION 3.5)
project({{cookiecutter.package_name}})

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

cs_add_library(${PROJECT_NAME} src/{{cookiecutter.class_name_snake_case}}.cpp)

# Use the following for a header only library:
# add_library(${PROJECT_NAME} INTERFACE)
# target_link_libraries(${PROJECT_NAME} INTERFACE ${catkin_LIBRARIES})

# Use the following to add an executable:
# cs_add_executable(example_executable src/example_executable.cpp)
# target_link_libraries(example_executable ${PROJECT_NAME})

catkin_add_gtest(test_${PROJECT_NAME} test/test_${PROJECT_NAME}.cc)
target_link_libraries(test_${PROJECT_NAME} ${PROJECT_NAME})

cs_install()
cs_export()
