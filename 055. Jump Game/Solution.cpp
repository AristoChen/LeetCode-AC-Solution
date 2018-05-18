class Solution {
public:
	bool canJump(vector<int>& nums) {
		int i = 0;
		int answer = 0;
		for (i = 0; i < nums.size() && i <= answer; i++)
		{
			answer = answer >(i + nums[i]) ? answer : (i + nums[i]);
			if (answer >= nums.size() - 1)
				return true;
		}
		return false;
	}
};