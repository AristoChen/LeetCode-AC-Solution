/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 36.94 %
    Runtime : 13 ms
    Testcase : 47 / 47 passed
    Ranking : Your runtime beats 99.91 % of cpp submissions.
}
*/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int answer = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    calculate(grid, i, j);
                    answer++;
                }
            }
        }
        return answer;
    }
    
    void calculate(vector<vector<char>>& grid, int i, int j)
    {
        if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == '1')
        {
            grid[i][j] = '0';
            calculate(grid, i-1, j+0);
            calculate(grid, i+1, j+0);
            calculate(grid, i+0, j-1);
            calculate(grid, i+0, j+1);
        }
    }
};