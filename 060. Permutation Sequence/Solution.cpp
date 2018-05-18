class Solution {
public:
	string getPermutation(int n, int k) {
		vector<int> nums(n, 1), factorial(n, 1);
		string answer = "";
		int index = 0;

		for (int i = 0; i < n; i++)
		{
			nums[i] = i + 1;
			if (i > 0)
				factorial[i] = factorial[i - 1] * (i + 1);
		}

		for (int i = n - 1; i > 0; i--)
		{
			index = k % factorial[i - 1] == 0 ? (k / factorial[i - 1]) - 1 : (k / factorial[i - 1]);
			answer += to_string(nums[index]);
			nums.erase(nums.begin() + index);
			k -= index*factorial[i - 1];
		}
		answer += to_string(nums[0]);

		return answer;
	}
};