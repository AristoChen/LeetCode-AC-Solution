/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 44.68 %
    Runtime : 4 ms
    Testcase : 113 / 113 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    bool checkRecord(string s) {
        int abscent = 0, late = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'L')
                late++;
            else
            {
                late = 0;
                if(s[i] == 'A')
                   abscent++;
            }
            if(late > 2 || abscent > 1)
                return false;
        }
        
        return true;
    }
};