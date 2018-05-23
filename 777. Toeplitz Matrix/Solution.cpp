class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++)
        {
            if(!calculate(matrix, i, 0))
                return false;
        }
        
        for(int j = 1; j < matrix[0].size(); j++)
        {
            if(!calculate(matrix, 0, j))
                return false;
        }
        
        return true;
    }
    
    bool calculate(vector<vector<int>>& matrix, int i, int j)
    {
        while(i < matrix.size()-1 && j < matrix[0].size()-1)
        {
            if(matrix[i][j] != matrix[i+1][j+1])
                return false;
            i++;
            j++;
        }
        return true;
    }
};