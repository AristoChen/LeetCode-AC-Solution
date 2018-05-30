/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.13 %
    Runtime : 14 ms
    Testcase : 32 / 32 passed
    Ranking : Your runtime beats 49.78 % of cpp submissions.
}
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};