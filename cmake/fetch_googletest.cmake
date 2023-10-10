include(FetchContent)
FetchContent_Declare(googletest ①
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG 15460959cbbfa20e66ef0b5ab497367e47fc0a04 #v1.12.0
    )

if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()
