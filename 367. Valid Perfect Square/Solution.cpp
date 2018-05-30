/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 38.74 %
    Runtime : 2 ms
    Testcase : 67 / 67 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        while(num > 0)
        {
            num -= i;
            i += 2;
        }
        if(num == 0)
            return true;
        else 
            return false;
    }
};