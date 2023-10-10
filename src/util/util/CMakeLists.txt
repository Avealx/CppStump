set(test_libraries
    GTest::gmock
    GTest::gmock_main
    GTest::gtest
    )


add_library(util
    ${CMAKE_CURRENT_SOURCE_DIR}/util.cpp
    )
target_include_directories(util
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/..
    )

add_executable(util_test util.test.cpp)
target_link_libraries(util_test
    PRIVATE
    ${test_libraries}
    util
    )
add_test(NAME util_test COMMAND util_test)
