/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 55.84 %
    Runtime : 8 ms
    Testcase : 204 / 204 passed
    Ranking : Your runtime beats 17.78 % of cpp submissions.
}
*/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int previousBit = n%2;
        n = n>>1;
        while(n != 0)
        {
            if(previousBit == n%2)
                return false;
            else
            {
                previousBit = n%2;
                n = n>>1;
            }
        }
        
        return true;
    }
};