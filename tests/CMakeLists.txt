set(TEST_SRC_LIST
    ${{%PROJECT_NAME%}_SOURCE_DIR}/tests/main.cpp
    ${{%PROJECT_NAME%}_SOURCE_DIR}/tests/test_factorial.cpp)

set(DOCTEST_INCLUDE_DIR ../extern)

add_library(doctest INTERFACE)
target_include_directories(doctest INTERFACE ${DOCTEST_INCLUDE_DIR})

add_executable({%PROJECT_NAME%}_tests main.cpp ${TEST_SRC_LIST})

target_compile_features({%PROJECT_NAME%}_tests PRIVATE cxx_std_17)
target_include_directories({%PROJECT_NAME%}_tests PUBLIC ../include)
target_link_libraries({%PROJECT_NAME%}_tests PRIVATE {%PROJECT_NAME%}_lib doctest fmt::fmt)
