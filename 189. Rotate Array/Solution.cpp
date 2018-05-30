/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 25.65 %
    Runtime : 59 ms
    Testcase : 34 / 34 passed
    Ranking : Your runtime beats 11.89 % of cpp submissions.
}
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < k; i++)
        {
            nums.insert(nums.begin(), nums[nums.size()-1]);
            nums.pop_back();
        }
    }
};