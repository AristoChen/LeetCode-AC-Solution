/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 37.20 %
    Runtime : 20 ms
    Testcase : 49 / 49 passed
    Ranking : Your runtime beats 66.46 % of cpp submissions.
}
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i= 0, j = height.size() - 1, h = 0;
        int answer = 0;
        while(i < j)
        {
            h = min(height[i], height[j]);
            answer = max(answer, (j - i) * h);
            while(h >= height[i] && i < j) i++;
            while(h >= height[j] && i < j) j--;
        }
        return answer;
    }
};