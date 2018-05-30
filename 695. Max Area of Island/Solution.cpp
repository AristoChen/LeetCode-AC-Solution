/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 51.94 %
    Runtime : 32 ms
    Testcase : 726 / 726 passed
    Ranking : Your runtime beats 65.88 % of cpp submissions.
}
*/

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int answer = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                    answer = max(answer, calculate(grid, i, j));                 
            }
        }
        return answer;
    }
    
    int calculate(vector<vector<int>>& grid, int i, int j)
    {
        if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1)
        {
            grid[i][j] = 0;
            return 1 + calculate(grid, i-1, j) + calculate(grid, i+1, j) + calculate(grid, i, j-1) + calculate(grid, i , j+1);
        }
        return 0;
    }
};