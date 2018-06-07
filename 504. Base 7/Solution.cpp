/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 43.83 %
    Runtime : 8 ms
    Testcase : 241 / 241 passed
    Ranking : Your runtime beats 54.21 % of cpp submissions.
}
*/

class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        
        string answer = "";
        int sign = num >= 0 ? 1 : -1;
        
        num = abs(num);
        while(num != 0)
        {
            answer = to_string(num%7) + answer;
            num /= 7;
        }
        if(sign == -1)
            answer = "-" + answer;
        
        return answer;
    }
};