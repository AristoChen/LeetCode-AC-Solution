/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.86 %
    Runtime : 38 ms
    Testcase : 277 / 277 passed
    Ranking : Your runtime beats 30.13 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor)
            calculate(image, sr, sc, image[sr][sc], newColor);
        
        return image;
    }
    
    void calculate(vector<vector<int>>& image, int i, int j, int originColor, int newColor)
    {
        if(i >= 0 && i < image.size() && j >= 0 && j < image[0].size())
        {
            if(image[i][j] == originColor)
            {
                image[i][j] = newColor;
                calculate(image, i-1, j, originColor, newColor);
                calculate(image, i+1, j, originColor, newColor);
                calculate(image, i, j-1, originColor, newColor);
                calculate(image, i, j+1, originColor, newColor);
            }
        }
    }
};