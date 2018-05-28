class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCurrent = 0, answer = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            maxCurrent += nums[i];  
            answer = max(answer, maxCurrent);
            
            if(maxCurrent < 0)
                maxCurrent = 0;
        }
        
        return answer;
    }
};