class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int answer = 0, temp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            temp = nums[i];
            if(temp == k)
                answer++;
            for(int j = i+1; j < nums.size(); j++)
            {
                temp += nums[j];
                if(temp == k)
                    answer++;
            }
        }
        return answer;
    }
};