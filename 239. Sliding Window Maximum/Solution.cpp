class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size() == 0 || k == 0)
            return {};
        vector<int> answer;
        int currentMax = INT_MIN;
        for(int i = 0; i < nums.size()-k+1 ; i++)
        {
            for(int j = 0; j < k; j++)
            {
                currentMax = max(currentMax, nums[i+j]);
            }
            answer.push_back(currentMax);
            currentMax = INT_MIN;
        }
        return answer;
    }
};