/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 41.760284951 %
    Runtime : 18 ms
    Testcase : 315 / 315 passed
    Ranking : Your runtime beats 24.67 % of cpp submissions.
}
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0, temp = 0, len1 = num1.length(), len2 = num2.length();
        string answer = "";
        
        for(int i = 0; i < max(len1, len2); i++)
        {
            if(len1 > i)
                temp += int(num1[len1-i-1]-'0');
            if(len2 > i)
                temp += int(num2[len2-i-1]-'0');
            temp += carry;
            carry = 0;
            if(temp > 9)
            {
                temp -= 10;
                carry = 1;
            }
            answer = to_string(temp) + answer;
            temp = 0;
        }
        if(carry == 1)
            answer = "1" + answer;
        
        return answer;
    }
};