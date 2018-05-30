/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 42.65 %
    Runtime : 4 ms
    Testcase : 66 / 66 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    string maskPII(string S) {
        if(isalpha(S[0]))
            return email(S);
        else
            return phone(S);
    }
    
    string email(string S)
    {
        int index = 0;
        for(int i = 0; i < S.length(); i++)
        {
            if(isalpha(S[i]))
                S[i] = tolower(S[i]);
              
            else if(S[i] == '@')
                index = i-1;
        }
        S.erase(1, index-1);
        S.insert(1, "*****");
        return S;
    }
    
    string phone(string S)
    {
        int digits = 0;
        for(int i = 0; i < S.length(); i++)
        {
            if(isdigit(S[i]))
                digits++;
            else
            {
                S.erase(i,1);
                i--;
            }
        }
        S.erase(0, digits-4);
        
        if(digits > 10)
        {
            if(digits == 11)
                S = "+*-***-***-" + S;
            else if(digits == 12)
                S = "+**-***-***-" + S;
            else if(digits == 13)
                S = "+***-***-***-" + S;
        }
        else if(digits == 10)
            S = "***-***-" + S;
        
        return S;
    }
};