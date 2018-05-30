/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 15.66 %
    Runtime : 8 ms
    Testcase : 22 / 22 passed
    Ranking : Your runtime beats 44.83 % of cpp submissions.
}
*/

class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        while(s[0] == ' ')
            s.erase(0, 1);
        while(s[s.length()-1] == ' ')
            s.pop_back();
        
        int index = 0;
        s += " ";
        for(int i = 0; i < s.length(); i++)
        {
            if(isspace(s[i]) && isspace(s[i+1]))
            {
                s.erase(i, 1);
                i--;
            }
            
            else if(isspace(s[i]) && !isspace(s[i+1]))
            {
                reverse(s.begin()+index, s.begin()+i);
                index = i+1;                
            }    
        }
        s = s.substr(0, s.length()-1);
    }
};