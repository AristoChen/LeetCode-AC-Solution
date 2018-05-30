/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 27.41 %
    Runtime : 75 ms
    Testcase : 476 / 476 passed
    Ranking : Your runtime beats 3.05 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++)
        {
            if(!isalpha(s[i]) && !isdigit(s[i]))
            {
                s.erase(i,1);
                i--;
            }
        }
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(s == temp)
            return true;
        return false;
    }
};