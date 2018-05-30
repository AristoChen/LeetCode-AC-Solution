/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 41.11 %
    Runtime : 7 ms
    Testcase : 113 / 113 passed
    Ranking : Your runtime beats 59.57 % of cpp submissions.
}
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
            return 0;
        
        int length = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin()+i);
                i--;                
            }
            else 
                length++;
        }
        return length;
    }
};