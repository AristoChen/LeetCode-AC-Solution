class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
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
					calculate(candidates, answer, combination, target - candidates[i], i);
					combination.pop_back();
				}
			}
		}
	}
};