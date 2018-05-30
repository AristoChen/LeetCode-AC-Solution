/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 39.17 %
    Runtime : 7 ms
    Testcase : 58 / 58 passed
    Ranking : Your runtime beats 29.75 % of cpp submissions.
}
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int minInt = -2147483648;
        nums.insert(nums.begin(), minInt);
        nums.push_back(minInt);
        if(nums.size() == 3)
            return 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                return i - 1;
        }
        return -1;
    }
};