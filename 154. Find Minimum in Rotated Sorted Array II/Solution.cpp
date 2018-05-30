/*
Submission Detail:{
    Difficulty : Hard
    Acceptance Rate : 37.97 %
    Runtime : 10 ms
    Testcase : 192 / 192 passed
    Ranking : Your runtime beats 15.40 % of cpp submissions.
}
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};