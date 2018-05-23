class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double answer = INT_MIN, temp = 0;
        for(int i = 0; i < nums.size()-k+1; i++)
        {
            for(int j = 0; j < k; j++)
                temp += nums[i+j];
            answer = max(answer, (temp/k));
            temp = 0;
        }
        return answer;
    }
};