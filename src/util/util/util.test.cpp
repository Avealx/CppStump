#include <util/util.h>

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace util;
using testing::Eq;

TEST(util, foo) {
    EXPECT_THAT(foo(), Eq(42));
}
