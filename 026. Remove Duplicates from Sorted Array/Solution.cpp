/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 36.79 %
    Runtime : 49 ms
    Testcase : 161 / 161 passed
    Ranking : Your runtime beats 18.13 % of cpp submissions.
}
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        int length = 0;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;                
            }
            else
                length++;
        }
        return length+1;
    }
};