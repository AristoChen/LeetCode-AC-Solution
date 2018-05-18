class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {

		if (matrix.size() == 0)
			return{};

		vector<int> answer(matrix.size()*matrix[0].size());

		if (matrix.size() == 1 && matrix[0].size() == 1)
		{
			answer[0] = matrix[0][0];
			return answer;
		}

		int count = 0;
		int i = 0, j = 0;
		int upBound = 0, bottomBound = matrix.size() - 1, leftBound = 0, rightBound = matrix[0].size() - 1;
		int horizontal = 1, vertical = 0;

		while (count < (matrix.size()*matrix[0].size()))
		{
			answer[count] = matrix[i][j];

			if (horizontal == 1)
			{
				if (j == rightBound)
				{
					horizontal = 0;
					vertical = -1;
					rightBound--;
					upBound++;
				}
				else
				{
					count++;
					j++;
				}
			}

			else if (vertical == -1)
			{
				if (i == bottomBound)
				{
					horizontal = -1;
					vertical = 0;
					bottomBound--;
				}
				else
				{
					count++;
					i++;
				}
			}

			else if (horizontal == -1)
			{
				if (j == leftBound)
				{
					horizontal = 0;
					vertical = 1;
					leftBound++;
				}
				else
				{
					count++;
					j--;
				}

			}

			else if (vertical == 1)
			{
				if (i == upBound)
				{
					horizontal = 1;
					vertical = 0;
				}
				else
				{
					count++;
					i--;
				}
			}
		}
		return answer;
	}
};