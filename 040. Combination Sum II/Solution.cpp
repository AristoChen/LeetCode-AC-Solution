class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		sort(candidates.begin(), candidates.end());
		vector<vector<int>> answer;
		vector<int> combination;

		calculate(candidates, answer, combination, target, 0);

		return answer;
	}

	void calculate(vector<int>& candidates, vector<vector<int>>& answer, vector<int>& combination, int target, int begin)
	{
		if (target == 0)
		{
			if (find(answer.begin(), answer.end(), combination) == answer.end())
				answer.push_back(combination);
			return;
		}
		else
		{
			for (int i = begin; i < candidates.size(); i++)
			{
				if (target >= candidates[i])
				{
					combination.push_back(candidates[i]);
					calculate(candidates, answer, combination, target - candidates[i], i + 1);
					combination.pop_back();
				}
			}
		}
	}
};