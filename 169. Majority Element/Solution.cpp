class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> answer(1), frequency(1);
        for(int i = 0; i < nums.size(); i++)
        {
            if(find(answer.begin(), answer.end(), nums[i]) != answer.end())
                frequency[(find(answer.begin(), answer.end(), nums[i]) - answer.begin())]++;
            else
            {
                answer.push_back(nums[i]);
                frequency.push_back(1);                
            }                
        }
        
        for(int i = 0; i < answer.size(); i++)
        {
            if(frequency[i] > (nums.size() / 2))
                return answer[i];
        }
        return 0;
    }
};