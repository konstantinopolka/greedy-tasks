#include <gtest/gtest.h>
#include "../include/Solution.h"

TEST(SolutionTest, FindContentChildren) {
    Solution solution;
    std::vector<int> g = {7, 7, 9, 10, 11, 12};
    std::vector<int> s = {4, 7, 8, 9};
    EXPECT_EQ(solution.findContentChildren(g, s), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}