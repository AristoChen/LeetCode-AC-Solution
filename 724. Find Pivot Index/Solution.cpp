/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 39.51 %
    Runtime : 886 ms
    Testcase : 741 / 741 passed
    Ranking : Your runtime beats 2.58 % of cpp submissions.
}
*/

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