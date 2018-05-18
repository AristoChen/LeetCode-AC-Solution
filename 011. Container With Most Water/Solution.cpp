class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0, j = height.size() - 1, h = 0;
		int answer = 0;
		while (i < j)
		{
			h = min(height[i], height[j]);
			answer = max(answer, (j - i) * h);
			while (h >= height[i] && i < j) i++;
			while (h >= height[j] && i < j) j--;
		}
		return answer;
	}
};