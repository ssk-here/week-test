
/**
* @file subsets-ii.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/subsets-ii
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK3" "subsets-ii"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
    }
};
// write gtests here
TEST(SubsetsTest, EmptyInput) {
    Solution solution;
    vector<int> nums = {};
    vector<vector<int>> expected = {{}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsTest, SingleElement) {
    Solution solution;
    vector<int> nums = {1};
    vector<vector<int>> expected = {{}, {1}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsTest, TwoElements) {
    Solution solution;
    vector<int> nums = {1, 2};
    vector<vector<int>> expected = {{}, {1}, {2}, {1, 2}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsTest, ThreeElements) {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> expected = {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsWithDupTest, DuplicateElements) {
    Solution solution;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> expected = {{}, {1}, {2}, {1, 2}, {2, 2}, {1, 2, 2}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsWithDupTest, AllDuplicates) {
    Solution solution;
    vector<int> nums = {2, 2, 2};
    vector<vector<int>> expected = {{}, {2}, {2, 2}, {2, 2, 2}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsWithDupTest, MixedDuplicates) {
    Solution solution;
    vector<int> nums = {1, 2, 2, 3};
    vector<vector<int>> expected = {
        {}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 2}, {2, 3}, {1, 2, 2}, {1, 2, 3}, {2, 2, 3}, {1, 2, 2, 3}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}

TEST(SubsetsWithDupTest, LargeInput) {
    Solution solution;
    vector<int> nums = {1, 2, 2, 3, 3};
    vector<vector<int>> expected = {
        {}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 2}, {2, 3}, {3, 3}, {1, 2, 2}, {1, 2, 3}, {1, 3, 3},
        {2, 2, 3}, {2, 3, 3}, {1, 2, 2, 3}, {1, 2, 3, 3}, {2, 2, 3, 3}, {1, 2, 2, 3, 3}};
    EXPECT_EQ(solution.subsetsWithDup(nums), expected);
}





int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
