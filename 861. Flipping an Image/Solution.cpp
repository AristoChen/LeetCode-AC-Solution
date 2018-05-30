/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 72.76 %
    Runtime : 15 ms
    Testcase : 82 / 82 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++)
        {
            reverse(A[i].begin(), A[i].end());
            for(int j = 0; j < A[i].size(); j++)
                A[i][j] = A[i][j] ^ 1;
        }
        return A;
    }
};