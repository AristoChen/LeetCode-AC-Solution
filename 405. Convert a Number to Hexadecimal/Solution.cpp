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