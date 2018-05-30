/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 32.42 %
    Runtime : 7 ms
    Testcase : 124 / 124 passed
    Ranking : Your runtime beats 72.80 % of cpp submissions.
}
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 0)
            return true;
        for(int i = 1; i <= sqrt(c); i++)
        {
            if(pow(int(sqrt(c-pow(i,2))),2) + pow(i,2) == c)
                return true;
        }
        return false;
    }
};