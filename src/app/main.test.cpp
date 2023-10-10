#include "gtest/gtest.h"
#include "gmock/gmock.h"

using testing::Eq;

TEST(main_test, works) {
    EXPECT_THAT(3, Eq(3));
}
