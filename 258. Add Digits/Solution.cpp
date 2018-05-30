/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 51.95 %
    Runtime : 10 ms
    Testcase : 1101 / 1101 passed
    Ranking : Your runtime beats 12.74 % of cpp submissions.
}
*/

class Solution {
public:
    int addDigits(int num) {
        int answer;
        answer = calculate(num);
        while(answer >= 10)
        {
            answer = calculate(answer);
        }
        return answer;
    }
    
    int calculate(int num){
        int temp = 0;
        while(num > 0)
        {
            temp += num % 10;
            num = num / 10;
        }
        return temp;
    }
};