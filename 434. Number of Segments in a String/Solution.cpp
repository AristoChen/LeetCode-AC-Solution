/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 36.58 %
    Runtime : 5 ms
    Testcase : 26 / 26 passed
    Ranking : Your runtime beats 3.27 % of cpp submissions.
}
*/

class Solution {
public:
    int countSegments(string s) {
        if(s.length() == 0)
            return 0;
        s = " " + s;
        int answer = 0;
        for(int i = 0; i < s.length()-1; i++)
        {
            if(isspace(s[i]) && !isspace(s[i+1]))
                answer++;
        }
        
        return answer;
    }
};