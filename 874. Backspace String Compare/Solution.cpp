/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 53.15 %
    Runtime : 5 ms
    Testcase : 104 / 104 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == '#' && i-1 >= 0)
            {
                S.erase(i-1, 2);
                i -= 2;
            }
            else if(S[i] == '#' && i == 0)
            {
                S.erase(i, 1);
                i--;
            }
        }
        for(int i = 0; i < T.length(); i++)
        {
            if(T[i] == '#' && i-1 >= 0)
            {
                T.erase(i-1, 2);
                i -= 2;
            }
            else if(T[i] == '#' && i == 0)
            {
                T.erase(i, 1);
                i--;
            }
        }
        
        if(S == T)
            return true;
        return false;
    }
};