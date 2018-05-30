/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 23.68 %
    Runtime : 19 ms
    Testcase : 222 / 222 passed
    Ranking : Your runtime beats 5.18 % of cpp submissions.
}
*/

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string answer = "";
        
        sort(nums.begin(), nums.end(), [](int a, int b){return stol(to_string(a)+to_string(b)) > stol(to_string(b)+to_string(a));});  
        for(int i : nums)
        {
            if(answer.size() == 0 && i == 0)
                continue;
            answer += to_string(i);
        }
        
        if(answer != "")
            return answer;
        return "0";
    }
    
};