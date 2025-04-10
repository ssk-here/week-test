
/**
* @file coin-change.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/coin-change
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK4" "coin-change"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
    }
};
// write gtests here
TEST(CoinChangeTest, TestCase1) {
    Solution solution;
    vector<int> coins = {1, 2, 5};
    int amount = 11;
    EXPECT_EQ(solution.coinChange(coins, amount), 3); // 11 = 5 + 5 + 1
}

TEST(CoinChangeTest, TestCase2) {
    Solution solution;
    vector<int> coins = {2};
    int amount = 3;
    EXPECT_EQ(solution.coinChange(coins, amount), -1); // Not possible to make 3
}

TEST(CoinChangeTest, TestCase3) {
    Solution solution;
    vector<int> coins = {1};
    int amount = 0;
    EXPECT_EQ(solution.coinChange(coins, amount), 0); // No coins needed for amount 0
}

TEST(CoinChangeTest, TestCase4) {
    Solution solution;
    vector<int> coins = {186, 419, 83, 408};
    int amount = 6249;
    EXPECT_EQ(solution.coinChange(coins, amount), 20); // Example from LeetCode
}

TEST(CoinChangeTest, TestCase5) {
    Solution solution;
    vector<int> coins = {1, 2, 5};
    int amount = 100;
    EXPECT_EQ(solution.coinChange(coins, amount), 20); // 100 = 20 * 5
}

int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
