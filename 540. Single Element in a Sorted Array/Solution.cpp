/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 55.86 %
    Runtime : 12 ms
    Testcase : 7 / 7 passed
    Ranking : Your runtime beats 8.36 % of cpp submissions.
}
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i = i+2)
        {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
    }
};