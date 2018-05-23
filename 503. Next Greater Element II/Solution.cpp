class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> answer(nums.size(), -1);
        nums.insert(nums.end(), nums.begin(), nums.end());
        for(int i = 0; i < nums.size()/2; i++)
        {
            for(int j = i+1; j < nums.size()/2+i; j++)
            {
                if(nums[j] > nums[i])
                {
                    answer[i] = nums[j];
                    break;                    
                }
            }
        }
        return answer;
    }
};