class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> answer;
		int size = nums.size();
		vector<int> factorial(1, 1);
		int count = 0;
		int temp = 0;

		if (size == 1)
		{
			answer.push_back({ 1 });
			return answer;
		}

		for (int i = 1; i < size; i++)
			factorial[i] = (i + 1) * factorial[i - 1];

		while (count < factorial[size - 1])
		{
			for (int i = 0; i < size - 1; i++)
			{
				if (find(answer.begin(), answer.end(), nums) == answer.end())
				{
					answer.push_back(nums);
					i = 0;
					count++;
				}
				if (i >= 0 && count % factorial[i] == 0)
				{
					temp = nums[size - i - 1];
					nums[size - i - 1] = nums[size - i - 2];
					nums[size - i - 2] = temp;
				}
			}
		}
		return answer;
	}
};