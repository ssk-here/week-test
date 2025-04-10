
/**
* @file generate-parentheses.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/generate-parentheses
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK4" "generate-parentheses"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
    }
};
// write gtests here
TEST(GenerateParenthesesTest, ExampleTest1) {
    Solution solution;
    int n = 3;
    vector<string> expected = {"((()))", "(()())", "(())()", "()(())", "()()()"};
    vector<string> result = solution.generateParenthesis(n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(GenerateParenthesesTest, ExampleTest2) {
    Solution solution;
    int n = 1;
    vector<string> expected = {"()"};
    vector<string> result = solution.generateParenthesis(n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(GenerateParenthesesTest, ExampleTest3) {
    Solution solution;
    int n = 0;
    vector<string> expected = {""};
    vector<string> result = solution.generateParenthesis(n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}
TEST(GenerateParenthesesTest, ExampleTest4) {
    Solution solution;
    int n = 2;
    vector<string> expected = {"(())", "()()"};
    vector<string> result = solution.generateParenthesis(n);
    EXPECT_EQ(result.size(), expected.size()) << "Expected: " << expected << ", Result: " << result;
    sort(result.begin(), result.end());
    sort(expected.begin(), expected.end());
    EXPECT_EQ(result, expected);
}

int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
