
/**
* @file combinations.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/combinations
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK4" "combinations"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
    }
};
// write gtests here
TEST(CombinationsTest, ExampleTest1) {
    Solution solution;
    int n = 4, k = 2;
    vector<vector<int>> expected = {{2, 4}, {3, 4}, {2, 3}, {1, 2}, {1, 3}, {1, 4}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest2) {
    Solution solution;
    int n = 1, k = 1;
    vector<vector<int>> expected = {{1}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest3) {
    Solution solution;
    int n = 4, k = 1;
    vector<vector<int>> expected = {{1}, {2}, {3}, {4}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest4) {
    Solution solution;
    int n = 5, k = 3;
    vector<vector<int>> expected = {{3, 4, 5}, {2, 4, 5}, {2, 3, 5}, {1, 4, 5}, {1, 3, 5}, {1, 2, 5}, {1, 2, 3}, {1, 2, 4}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest5) {
    Solution solution;
    int n = 0, k = 0;
    vector<vector<int>> expected = {{}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest6) {
    Solution solution;
    int n = 3, k = 2;
    vector<vector<int>> expected = {{1, 2}, {1, 3}, {2, 3}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(CombinationsTest, ExampleTest7) {
    Solution solution;
    int n = 6, k = 3;
    vector<vector<int>> expected = {{4, 5, 6}, {3, 5, 6}, {3, 4, 6}, {3, 4, 5}, {2, 5, 6}, {2, 4, 6}, {2, 4, 5}, {2, 3, 6}, {2, 3, 5}, {2, 3, 4}, {1, 5, 6}, {1, 4, 6}, {1, 4, 5}, {1, 3, 6}, {1, 3, 5}, {1, 3, 4}, {1, 2, 6}, {1, 2, 5}, {1, 2, 4}};
    vector<vector<int>> result = solution.combine(n, k);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    for (auto& vec : result) sort(vec.begin(), vec.end());
    for (auto& vec : expected) sort(vec.begin(), vec.end());
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
