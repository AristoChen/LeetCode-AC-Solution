class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i = i+2)
        {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
    }
};