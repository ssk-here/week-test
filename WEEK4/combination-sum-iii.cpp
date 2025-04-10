
/**
* @file combination-sum-iii.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/combination-sum-iii
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK4" "combination-sum-iii"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
    }
};
// write gtests here
TEST(CombinationSum3Test, ExampleTest1) {
    Solution solution;
    int k = 3;
    int n = 7;
    vector<vector<int>> expected = {{1, 2, 4}};
    vector<vector<int>> result = solution.combinationSum3(k, n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

TEST(CombinationSum3Test, ExampleTest2) {
    Solution solution;
    int k = 3;
    int n = 9;
    vector<vector<int>> expected = {{1, 2, 6}, {1, 3, 5}, {2, 3, 4}};
    vector<vector<int>> result = solution.combinationSum3(k, n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

TEST(CombinationSum3Test, ExampleTest3) {
    Solution solution;
    int k = 4;
    int n = 1;
    vector<vector<int>> expected = {};
    vector<vector<int>> result = solution.combinationSum3(k, n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

TEST(CombinationSum3Test, ExampleTest4) {
    Solution solution;
    int k = 2;
    int n = 18;
    vector<vector<int>> expected = {};
    vector<vector<int>> result = solution.combinationSum3(k, n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

TEST(CombinationSum3Test, ExampleTest5) {
    Solution solution;
    int k = 3;
    int n = 15;
    vector<vector<int>> expected = {{1, 5, 9}, {2, 4, 9}, {3, 4, 8}};
    vector<vector<int>> result = solution.combinationSum3(k, n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

// Repeat the same pattern for the remaining tests

int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
