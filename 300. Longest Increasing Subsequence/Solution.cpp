/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 38.96 %
    Runtime : 36 ms
    Testcase : 24 / 24 passed
    Ranking : Your runtime beats 15.82 % of cpp submissions.
}
*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int currentLength = 1, maxLength = 1, preTemp, curTemp;
        for(int i = 0; i < nums.size()-1; i++)
        {
            preTemp = nums[i]; 
            curTemp = nums[i];
            currentLength = 1;
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[j] > curTemp)
                {
                    preTemp = curTemp;
                    curTemp = nums[j];
                    currentLength++;
                }
                else if(nums[j] < curTemp && nums[j] > preTemp)
                    curTemp = nums[j];
                    
            }
            maxLength = max(maxLength, currentLength);
        }
        return maxLength;
    }
};