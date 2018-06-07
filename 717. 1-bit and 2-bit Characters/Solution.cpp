/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 49.27 %
    Runtime : 6 ms
    Testcase : 93 / 93 passed
    Ranking : Your runtime beats 98.74 % of cpp submissions.
}
*/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int count = 0;
        
        bits.pop_back();
        while(bits.back() != 0 && bits.size() != 0)
        {
            count++;
            bits.pop_back();
        }
        
        if(count % 2 == 0)
            return true;
        return false;
    }
};