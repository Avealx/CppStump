add_executable(main main.cpp)
target_link_libraries(main
    PRIVATE
    util
    )

add_executable(main_test main.test.cpp)
target_link_libraries(main_test
    PRIVATE
    GTest::gmock
    GTest::gmock_main
    GTest::gtest
    )
add_test(NAME main_test COMMAND main_test)
