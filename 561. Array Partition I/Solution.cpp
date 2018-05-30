/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 66.49 %
    Runtime : 78 ms
    Testcase : 81 / 81 passed
    Ranking : Your runtime beats 57.38 % of cpp submissions.
}
*/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int answer = 0;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i = i+2)
            answer += nums[i];
        
        return answer;
    }
};