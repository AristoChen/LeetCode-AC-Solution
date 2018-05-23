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