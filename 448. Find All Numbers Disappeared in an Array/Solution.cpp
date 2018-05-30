/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 51.13 %
    Runtime : 804 ms
    Testcase : 34 / 34 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> answer(nums.size()+1, 0);
        for(int i = 0; i < nums.size(); i++)
            answer[nums[i]]++;
        
        auto pos = answer.begin();
        answer.erase(pos);
        int count = 1;
        for(int i = 0; i < answer.size(); i++, count++)
        {
            if(answer[i] > 0)
            {
                answer.erase(pos + i);
                i--;
            }
            else
                answer[i] = count;
        }
        return answer;
    }
};