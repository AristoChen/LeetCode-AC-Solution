/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.50 %
    Runtime : 4 ms
    Testcase : 21 / 21 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> answer(n, vector<int>(n, 0));
        int count = 1;
        int i = 0, j = 0;
        int upBound = 0, bottomBound = n-1, leftBound = 0, rightBound = n-1;
        int horizontal = 1, vertical = 0;
        
        
        while(count <= pow(n,2))
        {               
            answer[i][j] = count;
            if(horizontal == 1)
            {
                j++;
                if(j == rightBound)
                {
                    horizontal = 0;
                    vertical = -1;
                    rightBound--;
                    upBound++;
                }
            }
            
            else if(vertical == -1)
            {
                i++;
                if(i == bottomBound)
                {
                    horizontal = -1;
                    vertical = 0;
                    bottomBound--;
                }
            }
            
            else if(horizontal == -1)
            {
                j--;
                if(j == leftBound)
                {
                    horizontal = 0;
                    vertical = 1;
                    leftBound++;
                }
            }
            
            else if(vertical == 1)
            {
                i--;
                if(i == upBound)
                {
                    horizontal = 1;
                    vertical = 0;
                }
            }
            count++;
        }
        return answer;
    }
};