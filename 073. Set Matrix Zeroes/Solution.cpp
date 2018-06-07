/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 36.80 %
    Runtime : 79 ms
    Testcase : 159 / 159 passed
    Ranking : Your runtime beats 8.63 % of cpp submissions.
}
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> index;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == 0)
                    index.push_back(make_pair(i,j));
            }
        }
        
        for(int i = 0; i < index.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
                matrix[index[i].first][j] = 0;
            for(int j = 0; j < matrix.size(); j++)
                matrix[j][index[i].second] = 0;
        }
    }
};