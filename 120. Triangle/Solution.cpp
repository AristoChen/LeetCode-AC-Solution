/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 35.30 %
    Runtime : 8 ms
    Testcase : 43 / 43 passed
    Ranking : Your runtime beats 50.35 % of cpp submissions.
}
*/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = triangle.size()-2; i >= 0; i--)
        {
            for(int j = triangle[i].size()-1; j >= 0; j--)
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
        }
        
        return triangle[0][0];
    }
};