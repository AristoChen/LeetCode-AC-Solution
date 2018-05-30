/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 53.72 %
    Runtime : 47 ms
    Testcase : 41 / 41 passed
    Ranking : Your runtime beats 14.13 % of cpp submissions.
}
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentMax = 0, answer = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
                currentMax++;
            else
                currentMax = 0;
            answer = max(answer, currentMax);
        }
        return answer;
    }
};