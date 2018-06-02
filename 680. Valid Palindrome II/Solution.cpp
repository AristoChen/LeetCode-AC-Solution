/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 32.3202535498 %
    Runtime : 126 ms
    Testcase : 460 / 460 passed
    Ranking : Your runtime beats 60.07 % of cpp submissions.
}
*/

class Solution {
public:
    bool validPalindrome(string s) {
        return calculate(s, 0);
    }
    
    bool calculate(string s, int erased)
    {
        for(int i = 0; i < s.length()/2; i++)
        {
            if(s[i] == s[s.length()-i-1])
                continue;
            else
            {
                if(erased == 1)
                    return false;
                else
                {
                    string temp = s;
                    bool left = calculate(temp.replace(i, 1, ""), 1);
                    temp = s;
                    bool right = calculate(temp.replace(s.length()-i-1, 1, ""), 1);
                    return left || right;   
                }
            }
        }
        return true;
    }
};