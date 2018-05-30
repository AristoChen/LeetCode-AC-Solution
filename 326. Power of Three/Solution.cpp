/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.82 %
    Runtime : 78 ms
    Testcase : 21038 / 21038 passed
    Ranking : Your runtime beats 71.76 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        int const Max3PowerInt = 1162261467;
        if(n <= 0 || n > Max3PowerInt) 
            return false;
        return Max3PowerInt % n == 0;
    }
};