class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = nums.size();
        for(int i = 0; i < count; i++)
        {
            if(nums[i] == 0)
            {
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                i--;
                count--;
            }
        }
    }
};