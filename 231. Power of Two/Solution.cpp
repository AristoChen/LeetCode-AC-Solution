/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.85 %
    Runtime : 6 ms
    Testcase : 1108 / 1108 passed
    Ranking : Your runtime beats 83.03 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int maxInt = 1073741824;
        if(n > 0)
        {
            if(maxInt % n == 0)
                return true;
        }
        return false;
    }
};