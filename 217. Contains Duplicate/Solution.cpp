/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.43 %
    Runtime : 81 ms
    Testcase : 18 / 18 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

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