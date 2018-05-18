class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<int> temp;

		if (m == 1 || n == 1)
			return 1;

		for (int i = 0; i < n; i++)
			temp.push_back(i + 1);

		for (int i = 1; i < m - 1; i++)
		{
			for (int j = 1; j < n; j++)
				temp[j] += temp[j - 1];
		}

		return temp[n - 1];
	}
};