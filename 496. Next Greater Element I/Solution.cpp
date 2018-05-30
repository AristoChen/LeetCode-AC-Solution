/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 56.55 %
    Runtime : 15 ms
    Testcase : 17 / 17 passed
    Ranking : Your runtime beats 35.34 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> answer(findNums.size(), -1);
        for(int i = 0; i < answer.size(); i++)
        {
            int pos = find(nums.begin(), nums.end(), findNums[i]) - nums.begin();
            for(int j = pos; j < nums.size(); j++)
            {
                if(nums[j] > findNums[i])
                {
                    answer[i] = nums[j];
                    break;                    
                }
            }
                
        }
        return answer;
    }
};