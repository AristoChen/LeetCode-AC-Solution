/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 41.07 %
    Runtime : 3 ms
    Testcase : 100 / 100 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

const string HEX = "0123456789abcdef";

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
	    string answer;

        for (int i = 0; i < 8; i++)
        {
            if (num != 0)
            {
                answer = HEX[(num & 0xf)] + answer;
                num >>= 4;
            }
        }

        return answer;
    }
};