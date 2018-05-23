class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> answer(findNums.size(), -1);
        for(int i = 0; i < answer.size(); i++)
        {
            int pos = find(nums.begin(), nums.end(), findNums[i]) - nums.begin();
            for(int j = pos; j < nums.size(); j++)
            {
                if(nums[j] > findNums[i])
                {
                    answer[i] = nums[j];
                    break;                    
                }
            }
                
        }
        return answer;
    }
};