/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 43.49 %
    Runtime : 13 ms
    Testcase : 276 / 276 passed
    Ranking : Your runtime beats 74.58 % of cpp submissions.
}
*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i = 2; i < cost.size(); i++)
            cost[i] += min(cost[i-1], cost[i-2]);
        
        return min(cost[cost.size()-1], cost[cost.size()-2]);
    }
};