/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 54.51 %
    Runtime : 565 ms
    Testcase : 130 / 130 passed
    Ranking : Your runtime beats 1.88 % of cpp submissions.
}
*/

class Solution {
public:
    int countSubstrings(string s) {
        int answer = 0;
        int length = s.length();
        
        for(int i = 0; i < length; i++)
        {
            for(int j = i; j <= length; j++)
            {
                if(isPalindrom(s.substr(i, j-i)))
                    answer++;
            }
        }
        
        return answer;
    }
    
    bool isPalindrom(string s)
    {
        if(s.length() == 0)
            return false;
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] != s[s.length()-i-1])
                    return false;
            }
            return true;
        }
    }
};