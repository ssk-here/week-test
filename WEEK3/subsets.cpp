
/**
* @file subsets.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/subsets
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK3" "subsets"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    }
};
// write gtests here
TEST(SubsetsTest, EmptyInput) {
    Solution solution;
    vector<int> nums = {};
    vector<vector<int>> expected = {{}};
    EXPECT_EQ(solution.subsets(nums), expected);
}

TEST(SubsetsTest, SingleElement) {
    Solution solution;
    vector<int> nums = {1};
    vector<vector<int>> expected = {{}, {1}};
    EXPECT_EQ(solution.subsets(nums), expected);
}

TEST(SubsetsTest, TwoElements) {
    Solution solution;
    vector<int> nums = {1, 2};
    vector<vector<int>> expected = {{}, {1}, {2}, {1, 2}};
    EXPECT_EQ(solution.subsets(nums), expected);
}

TEST(SubsetsTest, ThreeElements) {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> expected = {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}};
    EXPECT_EQ(solution.subsets(nums), expected);
}


int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
