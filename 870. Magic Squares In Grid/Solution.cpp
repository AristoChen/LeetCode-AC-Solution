class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3)
            return 0;
        
        vector<int> rowSum(3),colSum(3), diagSum(2);
        int answer = 0;
        
        for(int i = 0; i < grid.size()-2; i++)
        {
            for(int j = 0; j < grid[0].size()-2; j++)
            {
                if(grid[i+0][j+0] == 0 || grid[i+0][j+0] > 9 || grid[i+0][j+1] == 0 || grid[i+0][j+1] > 9 || 
                   grid[i+0][j+2] == 0 || grid[i+0][j+2] > 9 || grid[i+1][j+0] == 0 || grid[i+1][j+0] > 9 ||
                   grid[i+1][j+1] == 0 || grid[i+1][j+1] > 9 || grid[i+1][j+2] == 0 || grid[i+1][j+2] > 9 ||
                   grid[i+2][j+0] == 0 || grid[i+2][j+0] > 9 || grid[i+2][j+1] == 0 || grid[i+2][j+1] > 9 ||
                   grid[i+2][j+2] == 0 || grid[i+2][j+2] > 9)
                    continue;
                    
                rowSum[0] = grid[i+0][j+0] + grid[i+0][j+1] + grid[i+0][j+2];
                rowSum[1] = grid[i+1][j+0] + grid[i+1][j+1] + grid[i+1][j+2];
                rowSum[2] = grid[i+2][j+0] + grid[i+2][j+1] + grid[i+2][j+2];
                
                colSum[0] = grid[i+0][j+0] + grid[i+1][j+0] + grid[i+2][j+0];
                colSum[1] = grid[i+0][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
                colSum[2] = grid[i+0][j+2] + grid[i+1][j+2] + grid[i+2][j+2];

                diagSum[0] = grid[i+0][j+0] + grid[i+1][j+1] + grid[i+2][j+2];
                diagSum[1] = grid[i+0][j+2] + grid[i+1][j+1] + grid[i+2][j+0];
                
                if(rowSum[0] == rowSum[1] && rowSum[0] == rowSum[2] &&
                   rowSum[0] == colSum[0] && rowSum[0] == colSum[1] && rowSum[0] == colSum[2] &&
                   rowSum[0] == diagSum[0] && rowSum[0] == diagSum[1])
                   answer++; 
            }
        }
        return answer;
    }
};