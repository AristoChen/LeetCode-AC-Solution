/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.33 %
    Runtime : 12 ms
    Testcase : 61 / 61 passed
    Ranking : Your runtime beats 33.54 % of cpp submissions.
}
*/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int down = grid.size();
        int right = grid[0].size();
        
        for(int i = 0; i < down; i++)
        {
            for(int j = 0; j < right; j++)
            {
                if(i >= 1 && j >= 1)
                    grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
                else if(i < 1 && j >= 1)
                    grid[i][j] += grid[i][j-1];
                else if(i >= 1&& j < 1)
                    grid[i][j] += grid[i-1][j];
            }
        }
    
        return grid[down-1][right-1];
    }
};