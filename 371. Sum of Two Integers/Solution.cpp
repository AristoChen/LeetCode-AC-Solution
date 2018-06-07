/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 50.80 %
    Runtime : 2 ms
    Testcase : 13 / 13 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    int getSum(int a, int b) {
        int result = 0, tempA = 0, tempB = 0, carry = 0, answer = 0;
        vector<int> bit;
        
        while(a != 0 || b != 0)
        {
            tempA = a % 2;
            tempB = b % 2;
            result = tempA + tempB + carry;

            carry = 0;
            if(result > 1)
            {
                result -= 2;
                carry = 1;
            }
            bit.push_back(result);
            
            a /= 2;
            b /= 2;
        }
        if(carry == 1)
            bit.push_back(1);
        
        for(int i = 0; i < bit.size(); i++)
            answer += bit[i] * pow(2,i);
            
        return answer;
    }
};