include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        b796f7d44681514f58a683a3a71ff17c94edb0c1 # release-1.13.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

include(GoogleTest)

add_executable(dsa_test test_linked_list.cpp)
target_link_libraries(dsa_test dsa GTest::gtest_main)
gtest_discover_tests(dsa_test)
