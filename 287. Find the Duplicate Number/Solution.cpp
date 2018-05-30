/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 44.60 %
    Runtime : 788 ms
    Testcase : 53 / 53 passed
    Ranking : Your runtime beats 2.20 % of cpp submissions.
}
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    return nums[i];
            }
        }
    }
};