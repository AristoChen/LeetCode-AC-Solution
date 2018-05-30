/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.05 %
    Runtime : 6 ms
    Testcase : 146 / 146 passed
    Ranking : Your runtime beats 31.69 % of cpp submissions.
}
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};