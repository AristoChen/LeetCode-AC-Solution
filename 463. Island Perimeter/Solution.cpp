/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 58.14 %
    Runtime : 204 ms
    Testcase : 5833 / 5833 passed
    Ranking : Your runtime beats 53.99 % of cpp submissions.
}
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int answer = 0;
        int x = grid.size(), y = grid[0].size();
        for(int i = 0; i < x ; i++)
        {
            for(int j = 0; j < y; j++)
            {
                if(grid[i][j] == 1)
                {
                    answer += 4;
                    
                    if(i - 1 >= 0)
                    {
                        if(grid[i-1][j] == 1)
                            answer -= 1;
                        //cout << "L" << answer << " ";
                    }
                    
                    if(i + 1 < x)
                    {
                        if(grid[i+1][j] == 1)
                            answer -= 1;
                        //cout << "R" << answer << " ";
                    }
                    
                    if(j - 1 >= 0)
                    {
                        if(grid[i][j-1] == 1)
                            answer -= 1;
                        //cout << "U" << answer << " ";
                    }
                    
                    if(j + 1 < y)
                    {
                        if(grid[i][j+1] == 1)
                            answer -= 1;
                        //cout << "D" << answer << " ";
                    }
                }
                
                //cout << "x:" << i << " y:" << j << " answer:" << answer << endl; 
            }
        }
        
        return answer;
    }
};