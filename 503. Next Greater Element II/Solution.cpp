/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 48.03 %
    Runtime : 266 ms
    Testcase : 224 / 224 passed
    Ranking : Your runtime beats 12.79 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> answer(nums.size(), -1);
        nums.insert(nums.end(), nums.begin(), nums.end());
        for(int i = 0; i < nums.size()/2; i++)
        {
            for(int j = i+1; j < nums.size()/2+i; j++)
            {
                if(nums[j] > nums[i])
                {
                    answer[i] = nums[j];
                    break;                    
                }
            }
        }
        return answer;
    }
};