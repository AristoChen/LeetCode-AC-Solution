/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 32.08 %
    Runtime : 6 ms
    Testcase : 59 / 59 passed
    Ranking : Your runtime beats 55.57 % of cpp submissions.
}
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0)
            return 0;
        while(isspace(s[0]))
            s.erase(s.begin());
        while(isspace(s[s.length()-1]))
            s.pop_back();
        
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(isspace(s[i]))
                return s.length()-i-1;
        }
        return s.length();
    }
};