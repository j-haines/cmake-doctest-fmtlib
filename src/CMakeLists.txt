set(HEADER_LIST ${{%PROJECT_NAME%}_SOURCE_DIR}/include/factorial.hpp)
set(SRC_LIST ${{%PROJECT_NAME%}_SOURCE_DIR}/src/factorial.cpp)

add_library({%PROJECT_NAME%}_lib ${SRC_LIST} ${HEADER_LIST})

target_compile_features({%PROJECT_NAME%}_lib PRIVATE cxx_std_17)
target_include_directories({%PROJECT_NAME%}_lib PUBLIC ../include)
target_link_libraries({%PROJECT_NAME%}_lib PRIVATE fmt::fmt)
