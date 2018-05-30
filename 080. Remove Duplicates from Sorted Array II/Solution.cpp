/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 37.15 %
    Runtime : 17 ms
    Testcase : 165 / 165 passed
    Ranking : Your runtime beats 29.49 % of cpp submissions.
}
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3)
            return nums.size();
        for(int i = 0; i < nums.size()-2; i++)
        {
            if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};