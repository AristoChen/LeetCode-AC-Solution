class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0)
            return -1;
        
        nums.insert(nums.begin(), 0);
        nums.push_back(0);
        int leftSum = 0, rightSum = 0;
        for(int i = 1; i < nums.size()-1; i++)
        {
            for(int j = i-1; j >= 0; j--)
                leftSum += nums[j];
            for(int k = i+1; k < nums.size(); k++)
                rightSum += nums[k];
            if(leftSum == rightSum)
                return i-1;
            leftSum = 0;
            rightSum = 0;
        }
        return -1;
    }
};