/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 58.32 %
    Runtime : 8 ms
    Testcase : 39 / 39 passed
    Ranking : Your runtime beats 22.44 % of cpp submissions.
}
*/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int answer = 0;
        vector<int> validNum;
        
        for(int i = 0; i < ops.size(); i++)
        {
            if(ops[i] != "C" && ops[i] != "D" && ops[i] != "+")
            {
                answer += stoi(ops[i]);
                validNum.push_back(stoi(ops[i]));                
            }
            
            else if(ops[i] == "C")
            {
                answer -= validNum[validNum.size()-1];
                validNum.pop_back();
            }
            
            else if(ops[i] == "D")
            {
                answer += (validNum[validNum.size()-1]*2);
                validNum.push_back(validNum[validNum.size()-1]*2);
            }
            
            else if(ops[i] == "+")
            {
                answer += (validNum[validNum.size()-2] + validNum[validNum.size()-1]);
                validNum.push_back((validNum[validNum.size()-2] + validNum[validNum.size()-1]));
            }
            
        }
        return answer;
    }
};