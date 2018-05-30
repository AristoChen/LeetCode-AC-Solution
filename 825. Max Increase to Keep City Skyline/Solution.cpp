/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 81.43 %
    Runtime : 10 ms
    Testcase : 133 / 133 passed
    Ranking : Your runtime beats 99.27 % of cpp submissions.
}
*/

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMax(grid.size(), INT_MIN);
        vector<int> colMax(grid.size() ? grid[0].size() : 0, INT_MIN);
        int answer = 0;
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                rowMax[i] = max(rowMax[i], grid[i][j]);
                colMax[i] = max(colMax[i], grid[j][i]);
            }
        }
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] < rowMax[i] && grid[i][j] < colMax[j])
                    answer += (min(rowMax[i], colMax[j]) - grid[i][j]);            
            }
        }
        
        return answer;
    }
};