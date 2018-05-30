/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 23.36 %
    Runtime : 51 ms
    Testcase : 75 / 75 passed
    Ranking : Your runtime beats 33.19 % of cpp submissions.
}
*/

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(k == 0)
        {
            for(int i = 0; i < nums.size()-1; i++)
            {
                if(nums[i] == 0 && nums[i+1] == 0)
                    return true;
            }
            return false;
        }
        
        else
        {
            int temp = 0;
            for(int i = 0; i < nums.size()-1; i++)
            {
                temp = nums[i];
                for(int j = i+1; j < nums.size(); j++)
                {
                    temp += nums[j];
                    if(temp % k == 0)
                        return true;
                }
            }
            return false;
        }           
    }
};