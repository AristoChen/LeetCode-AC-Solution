/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 43.27 %
    Runtime : 8 ms
    Testcase : 200 / 200 passed
    Ranking : Your runtime beats 80.63 % of cpp submissions.
}
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < minPrice)
                minPrice = prices[i];
            else if(maxProfit < prices[i] - minPrice)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};