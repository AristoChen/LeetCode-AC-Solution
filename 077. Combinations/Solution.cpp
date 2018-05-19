class Solution {
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> answer;
		vector<int> combination;
		calculate(answer, combination, k, n, 1);

		return answer;
	}

	void calculate(vector<vector<int>>& answer, vector<int>& combination, int count, int n, int begin)
	{
		if (count == 0)
		{
			answer.push_back(combination);
			return;
		}
		else
		{
			for (int i = begin; i <= n; i++)
			{
				combination.push_back(i);
				calculate(answer, combination, count - 1, n, i + 1);
				combination.pop_back();
			}
		}
	}
};