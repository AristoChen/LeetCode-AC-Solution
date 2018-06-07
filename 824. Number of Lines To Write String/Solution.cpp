/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 63.12 %
    Runtime : 3 ms
    Testcase : 26 / 26 passed
    Ranking : Your runtime beats 97.19 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int sum = 0, answer = 1;
        
        for(int i = 0; i < S.length(); i++)
        {
            sum += widths[int(S[i] -'a')];
            if(sum > 100)
            {
                sum = 0;
                answer++;
                i--;
            }
        }
        return {answer, sum};
    }
};