/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 32.28 %
    Runtime : 4 ms
    Testcase : 43 / 43 passed
    Ranking : Your runtime beats 99.10 % of cpp submissions.
}
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] == 1)
            return 0;
        
        vector<int> temp(1, 1);
        
        for(int i = 1; i < obstacleGrid[0].size(); i++)
        {
            if(obstacleGrid[0][i] == 1)
            {
                for(int j = i; j < obstacleGrid[0].size(); j++)
                    temp.push_back(0);
                i = obstacleGrid[0].size();                
            }
            else if(obstacleGrid[0][i] == 0)
                temp.push_back(1);
        }
        
        for(int i = 1; i < obstacleGrid.size(); i++)
        {
            for(int j = 0; j < obstacleGrid[0].size(); j++)
            {
                
                if(obstacleGrid[i][j] == 1)
                    temp[j] = 0;
                else if(obstacleGrid[i][j] == 0)
                {
                    if(j > 0)
                        temp[j] += temp[j-1];
                }
            }
        }
                
        return temp[obstacleGrid[0].size()-1];
    }
};