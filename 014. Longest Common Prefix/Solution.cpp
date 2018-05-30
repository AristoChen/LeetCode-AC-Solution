/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 31.67 %
    Runtime : 9 ms
    Testcase : 117 / 117 passed
    Ranking : Your runtime beats 51.87 % of cpp submissions.
}
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        
        if(strs.size() == 0)
            return answer;
            
        for(int i = 0; i < strs[0].size(); i++)
        {
            int j = 1; 
            for(; j < strs.size() && strs[j].size() > i; j++)
            {
                if(strs[0][i] != strs[j][i])
                    return answer;
            }
            if(j == strs.size())
                answer += strs[0][i];
            
        }
        return answer;
        
        
    }
};