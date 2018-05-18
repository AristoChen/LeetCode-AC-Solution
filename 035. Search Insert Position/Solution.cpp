class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		if (nums.size() == 0)
			return 0;
		if (nums.size() == 1)
		{
			if (target > nums[0])
				return 1;
			else
				return 0;
		}
		if (target < nums[0])
			return 0;
		else if (target > nums[nums.size() - 1])
			return nums.size();
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (target > nums[i] && target < nums[i + 1])
				return i + 1;
			else if (target == nums[i])
				return i;
			else if (target == nums[i + 1])
				return i + 1;
		}
	}
};