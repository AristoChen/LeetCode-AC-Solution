/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 63.30 %
    Runtime : 9 ms
    Testcase : 28 / 28 passed
    Ranking : Your runtime beats 65.42 % of cpp submissions.
}
*/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.size() == 0)
            return 0;
        
        int count = 0;
        for(int i = 0 ; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == 'X')
                {
                    count++;
                    if(i+1 < board.size() && board[i+1][j] == 'X')
                        count--;                    
                    
                    if(j+1 < board[0].size() && board[i][j+1] == 'X')
                        count--;                    
                }     
            }
        }
        
        return count;
    }
};