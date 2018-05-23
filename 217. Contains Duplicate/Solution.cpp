class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> temp;
        
        if(nums.empty())
            return false;
        
        for(int i = 0; i < nums.size(); i++)
        {
            temp[nums[i]]++;
            if(temp[nums[i]] > 1)
                return true;
        }
        return false;  
    }
};