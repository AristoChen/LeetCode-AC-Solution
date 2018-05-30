/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 27.47 %
    Runtime : 2 ms
    Testcase : 18 / 18 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    string convertToTitle(int n) {
        string answer = "";
        while(n > 0)
        {
            n--;
            answer = static_cast<char>('A' + n%26) + answer;
            n = n/26;
        }
        return answer;
    }
};