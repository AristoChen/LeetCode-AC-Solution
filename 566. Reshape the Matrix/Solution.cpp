/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 57.59 %
    Runtime : 39 ms
    Testcase : 56 / 56 passed
    Ranking : Your runtime beats 95.55 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if((nums.size()*nums[0].size()) != (r*c))
            return nums;
        
        vector<vector<int>> answer(r, vector<int>(c));
        int numsRow = 0, numsCol = 0;
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                answer[i][j] = nums[numsRow][numsCol];
                numsCol++;
                if(numsCol == nums[0].size())
                {
                    numsCol = 0;
                    numsRow++;
                }
            }
        }
        return answer;
    }
};