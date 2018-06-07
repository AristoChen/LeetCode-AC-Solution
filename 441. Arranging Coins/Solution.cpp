/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 36.54 %
    Runtime : 39 ms
    Testcase : 1336 / 1336 passed
    Ranking : Your runtime beats 55.88 % of cpp submissions.
}
*/

class Solution {
public:
    int arrangeCoins(int n) {
        long long answer = sqrt(2*(long long)(n));
        if(answer*(answer+1)/2 <= n)
            return answer;
        else
            return answer-1;
    }
};