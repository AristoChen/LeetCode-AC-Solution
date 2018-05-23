class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() == 3)
            return nums[0]*nums[1]*nums[2];
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int pos = nums.begin() - find(nums.begin(), nums.end(), 0);
        if(pos >= 0)
        {
            if(pos == size-1)
                return 0;
            else if(pos == size-2)
                return nums[0]*nums[1]*nums[size-1];
            else if(pos <= 1)
                return nums[size-1]*nums[size-2]*nums[size-3];
            else if(pos > 1 && pos < nums.size()-2)
            {
                if(nums[0]*nums[1]*nums[size-1] > nums[size-1]*nums[size-2]*nums[size-3])
                    return nums[0]*nums[1]*nums[size-1];
                else 
                    return nums[size-1]*nums[size-2]*nums[size-3];
            }
        }
        else
        {
            if(nums[size-1] < 0)
                return nums[size-1]*nums[size-2]*nums[size-3];
            else 
            {
                if(nums[0]*nums[1]*nums[size-1] > nums[size-1]*nums[size-2]*nums[size-3])
                    return nums[0]*nums[1]*nums[size-1];
                else
                    return nums[size-1]*nums[size-2]*nums[size-3];
            }
        }
    }
};