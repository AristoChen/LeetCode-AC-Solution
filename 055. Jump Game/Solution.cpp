/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 29.70 %
    Runtime : 13 ms
    Testcase : 75 / 75 passed
    Ranking : Your runtime beats 94.47 % of cpp submissions.
}
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int answer = 0;
        for (i = 0; i < nums.size() && i <= answer; i++)
        {
            answer = answer > (i + nums[i]) ? answer : (i + nums[i]);
            if (answer >= nums.size() - 1)
                return true;
        }
        return false;
    }
};