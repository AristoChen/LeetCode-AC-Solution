/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 53.03 %
    Runtime : 13 ms
    Testcase : 64 / 64 passed
    Ranking : Your runtime beats 12.42 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> answer;
        vector<int> flag;
        int carry = 1;
        int flagPos = 0;
        string temp = S;

        for(int i = 0; i < S.length(); i++)
        {
            if(isalpha(S[i]))
                flag.push_back(0);
        }
        
        if(flag.size() == 0)
            answer.push_back(S);
        else
        {
            for(int i = 0; i < pow(2, flag.size()); i++)
            {
                for(int j = 0; j < S.length(); j++)
                {
                    if(isalpha(S[j]))
                    {
                        if(flag[flagPos] == 1)
                            S[j] = toupper(temp[j]);
                        else if(flag[flagPos] == 0)
                            S[j] = tolower(temp[j]);
                        flag[flagPos] += carry;
                        carry = 0;

                        if(flag[flagPos] > 1)
                        {
                            flag[flagPos] = 0;
                            carry = 1;
                        }
                        flagPos++;
                    }              
                }
                flagPos = 0;
                carry = 1;
                answer.push_back(S);
                S = temp;
            }
        }
        
        return answer;
    }
};