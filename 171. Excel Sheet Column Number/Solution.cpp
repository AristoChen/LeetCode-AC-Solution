/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.86 %
    Runtime : 8 ms
    Testcase : 1000 / 1000 passed
    Ranking : Your runtime beats 45.10 % of cpp submissions.
}
*/

class Solution {
public:
    int titleToNumber(string s) {
        int answer = 0;
        for(int i = 0; i < s.length(); i++)
            answer += (int(s[i])-64) * pow(26, s.length()-i-1);
        return answer;
    }
};