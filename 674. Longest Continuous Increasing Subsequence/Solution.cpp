/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 42.55 %
    Runtime : 15 ms
    Testcase : 36 / 36 passed
    Ranking : Your runtime beats 97.26 % of cpp submissions.
}
*/

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int answer = 1, temp = 1;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i+1] > nums[i])
                temp++;
            else
            {
                answer = max(answer, temp);
                temp = 1;                
            }
        }
        answer = max(answer, temp);
        
        return answer;
    }
};