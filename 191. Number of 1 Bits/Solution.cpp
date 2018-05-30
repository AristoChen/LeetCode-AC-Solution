/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.58 %
    Runtime : 9 ms
    Testcase : 600 / 600 passed
    Ranking : Your runtime beats 8.61 % of cpp submissions.
}
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> temp = bitset<32>(n);
        int answer = 0;
        for(int i = 0; i < 32; i++)
        {
            if(temp[i] == 1)
                answer++;
        }
        
        return answer;
    }
};