/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 31.93 %
    Runtime : 10 ms
    Testcase : 196 / 196 passed
    Ranking : Your runtime beats 50.72 % of cpp submissions.
}
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(target == nums[i])
                return i;
        }
        return -1;
    }
};