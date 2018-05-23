class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //nums = {3,2,3,4,6,5};
        vector<int> answer(2);
        int exclusive = 0;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            exclusive = exclusive ^ nums[i];
            if(i+1 < nums.size())
            {
                if(nums[i] == nums[i+1])
                    answer[0] = nums[i];    
            }
        }
        
        exclusive = exclusive ^ answer[0];
        for(int i = 1; i <= nums.size(); i++)
            exclusive = exclusive ^ i;
            
        answer[1] = exclusive;
        
        return answer;
    }
};