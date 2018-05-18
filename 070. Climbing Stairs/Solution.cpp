class Solution {
public:
	int climbStairs(int n) {
		int stepOne = 0;
		int stepTwo = 1;
		int answer = 0;
		for (int i = 0; i < n; i++)
		{
			answer = stepOne + stepTwo;
			stepOne = stepTwo;
			stepTwo = answer;
		}
		return answer;
	}
};