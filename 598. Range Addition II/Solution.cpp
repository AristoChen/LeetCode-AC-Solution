/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.0403894373 %
    Runtime : 9 ms
    Testcase : 69 / 69 passed
    Ranking : Your runtime beats 99.52 % of cpp submissions.
}
*/

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size() == 0)
            return m*n;
        
        int a = ops[0][0], b = ops[0][1];
        for(int i = 1; i < ops.size(); i++)
        {
            a = min(a, ops[i][0]);
            b = min(b, ops[i][1]);
        }
        return a*b;
    }
};