/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 43.91 %
    Runtime : 14 ms
    Testcase : 60 / 60 passed
    Ranking : Your runtime beats 7.46 % of cpp submissions.
}
*/

class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.length(); i = i+(2*k))
            reverse(s.begin()+i, s.begin() + min(i+k, int(s.length())));                
    
        return s;
    }
};