/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 60.57 %
    Runtime : 12 ms
    Testcase : 476 / 476 passed
    Ranking : Your runtime beats 36.69 % of cpp submissions.
}
*/

class Solution {
public:
    string reverseString(string s) {
        string answer = "";
        for(int i = s.length()-1; i >= 0; i--)
            answer += s[i];
        return answer;
    }
};