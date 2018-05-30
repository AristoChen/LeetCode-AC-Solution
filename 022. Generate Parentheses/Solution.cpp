/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 48.56 %
    Runtime : 66 ms
    Testcase : 8 / 8 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer(1, "()");
        string temp = "()";
        int count = 0;
        
        while(answer[0].length() != (2*n))
        {
            for(int i = 0; i <= temp.length(); i++)
            {
                temp.insert(i, "()");
                if(find(answer.begin(), answer.end(), temp) == answer.end())
                    answer.push_back(temp);
                temp = answer[0];                               
            }
            answer.erase(answer.begin());
        }
        
        return answer;
    }
};