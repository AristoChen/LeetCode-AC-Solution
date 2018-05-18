class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		stack<int> stack;

		for (int i = 0; i < matrix.size(); i++)
		{
			for (int j = 0; j < matrix[0].size(); j++)
				stack.push(matrix[i][j]);
		}

		for (int j = 0; j < matrix[0].size(); j++)
		{
			for (int i = matrix.size() - 1; i >= 0; i--)
			{
				matrix[i][j] = stack.top();
				stack.pop();
			}
		}
	}
};