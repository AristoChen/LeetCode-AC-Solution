/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 29.06 %
    Runtime : 40 ms
    Testcase : 1017 / 1017 passed
    Ranking : Your runtime beats 15.14 % of cpp submissions.
}
*/

class Solution {
public:
    int mySqrt(int x) {
        int i = 1, count = 0;
        while(x > 0)
        {
            x -= i;
            i += 2;
            count++;
        }
        if(x < 0)
            count--;
        return count;
    }
};