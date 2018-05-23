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