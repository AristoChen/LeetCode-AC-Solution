/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 24.37 %
    Runtime : 30 ms
    Testcase : 1032 / 1032 passed
    Ranking : Your runtime beats 50.41 % of cpp submissions.
}
*/

class Solution {
public:
    int reverse(int x) {
        long long answer = 0; 
        int count = 0;
        
        while(x != 0)
        {
            answer = answer * 10 + (x % 10);
            //cout << answer << " " << count << " ";
            x = x / 10;
            count++;
        }
        return (answer < INT_MIN || answer > INT_MAX)? 0 : answer;
    }
};