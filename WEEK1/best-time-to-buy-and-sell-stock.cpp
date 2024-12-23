
/**
* @file best-time-to-buy-and-sell-stock.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/best-time-to-buy-and-sell-stock
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\build.bat "WEEK1" "best-time-to-buy-and-sell-stock"
*/
#include <allheaders.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, res = 0;
        for(int &price:prices){
            if(price < minPrice)
                minPrice = price;
            else
                res = max(res,price - minPrice);
        }
        return res;
    }
};
// write gtests here
TEST(BestTimeToBuyAndSellStockTest, HandlesEmptyPrices) {
    Solution sol;
    vector<int> prices = {};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}

TEST(BestTimeToBuyAndSellStockTest, HandlesSinglePrice) {
    Solution sol;
    vector<int> prices = {5};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}

TEST(BestTimeToBuyAndSellStockTest, HandlesIncreasingPrices) {
    Solution sol;
    vector<int> prices = {1, 2, 3, 4, 5};
    EXPECT_EQ(sol.maxProfit(prices), 4);
}

TEST(BestTimeToBuyAndSellStockTest, HandlesDecreasingPrices) {
    Solution sol;
    vector<int> prices = {5, 4, 3, 2, 1};
    EXPECT_EQ(sol.maxProfit(prices), 0);
}

TEST(BestTimeToBuyAndSellStockTest, HandlesMixedPrices) {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    EXPECT_EQ(sol.maxProfit(prices), 5);
}

TEST(BestTimeToBuyAndSellStockTest, HandlesMultipleProfits) {
    Solution sol;
    vector<int> prices = {7, 6, 4, 3, 1, 5, 3, 6, 4};
    EXPECT_EQ(sol.maxProfit(prices), 5);
}


int main() {
::testing::InitGoogleTest();
return RUN_ALL_TESTS();
}
