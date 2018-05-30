/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 81.92 %
    Runtime : 13 ms
    Testcase : 254 / 254 passed
    Ranking : Your runtime beats 9.28 % of cpp submissions.
}
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer = 0;
        for(char i : S)
        {
            if(J.find(i) != string::npos)
                answer++;
        }
        return answer;
    }
};