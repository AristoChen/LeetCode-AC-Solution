/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 38.08 %
    Runtime : 24 ms
    Testcase : 504 / 504 passed
    Ranking : Your runtime beats 52.39 % of cpp submissions.
}
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> horizontal(10, 0), vertical(10, 0), nineGrid(10, 0);
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(isdigit(board[i][j]) && board[i][j] != '0')
                {
                    if(horizontal[int(board[i][j])-int('0')] != 0)
                        return false;
                    else
                        horizontal[int(board[i][j])-int('0')]++;
                }
                if(isdigit(board[j][i]) && board[j][i] != '0')
                {
                    if(vertical[int(board[j][i])-int('0')] != 0)
                        return false;
                    else
                        vertical[int(board[j][i])-int('0')]++;
                }
                else
                    board[j][i] = '0';
            }
            horizontal = vector<int>(10, 0);
            vertical = vector<int>(10, 0);
        }
        
        for(int i = 0; i < 9; i=i+3)
        {
            for(int j = 0; j < 9; j=j+3)
            {
                nineGrid[int(board[i+0][j+0])-int('0')]++;
                nineGrid[int(board[i+0][j+1])-int('0')]++;
                nineGrid[int(board[i+0][j+2])-int('0')]++;
                nineGrid[int(board[i+1][j+0])-int('0')]++;
                nineGrid[int(board[i+1][j+1])-int('0')]++;
                nineGrid[int(board[i+1][j+2])-int('0')]++;
                nineGrid[int(board[i+2][j+0])-int('0')]++;
                nineGrid[int(board[i+2][j+1])-int('0')]++;
                nineGrid[int(board[i+2][j+2])-int('0')]++;
                for(int k = 1; k < nineGrid.size(); k++)
                {
                    if(nineGrid[k] > 1)
                        return false;
                }
                nineGrid = vector<int>(10, 0);
            }
        }
        return true;
    }
};