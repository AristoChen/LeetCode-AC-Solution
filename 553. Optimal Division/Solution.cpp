/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 55.11 %
    Runtime : 4 ms
    Testcase : 93 / 93 passed
    Ranking : Your runtime beats 97.40 % of cpp submissions.
}
*/

class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        if(nums.size() == 0)
            return "";
        else if(nums.size() == 1)
            return to_string(nums[0]);
        else if(nums.size() == 2)
            return (to_string(nums[0]) + "/" + to_string(nums[1]));
        else if(nums.size() > 2)
        {
            string answer = to_string(nums[0]) + "/(";
            for(int i = 1; i < nums.size(); i++)
                answer += (to_string(nums[i]) + "/");
            answer.erase(answer.length()-1, 1);
            answer += ")";
            
            return answer;
        }
    }
};