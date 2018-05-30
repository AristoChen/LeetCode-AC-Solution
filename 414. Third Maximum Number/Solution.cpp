/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 28.14 %
    Runtime : 9 ms
    Testcase : 26 / 26 passed
    Ranking : Your runtime beats 65.44 % of cpp submissions.
}
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        for(int i = nums.size()-1; i > 0; i--)
        {
            if(nums[i] != nums[i-1])
                count++;
            if(count == 3)
                return nums[i-1];
        }
        return nums.back();
    }
};