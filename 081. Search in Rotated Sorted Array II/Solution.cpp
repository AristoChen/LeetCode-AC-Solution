/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 32.61 %
    Runtime : 8 ms
    Testcase : 273 / 273 passed
    Ranking : Your runtime beats 66.37 % of cpp submissions.
}
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(target == nums[i])
                return true;
        }
        return false;
    }
};