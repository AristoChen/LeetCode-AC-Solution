/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 39.29 %
    Runtime : 7 ms
    Testcase : 1060 / 1060 passed
    Ranking : Your runtime beats 21.09 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num > 4)
        {
            if(num%4 != 0)
                return false;
            num /= 4;
        }
        if(num == 4 || num == 1)
            return true;
        return false;
    }
};