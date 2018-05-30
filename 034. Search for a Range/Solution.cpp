/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 31.69 %
    Runtime : 12 ms
    Testcase : 88 / 88 passed
    Ranking : Your runtime beats 86.74 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int up = upper_bound(nums.begin(), nums.end(), target)- nums.begin() - 1;
        if(up == -1 || low >= nums.size() || low > up)
            return {-1,-1};
        return {low, up};
    }
};