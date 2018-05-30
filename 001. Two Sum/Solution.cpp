/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 38.28 %
    Runtime : 183 ms
    Testcase : 19 / 19 passed
    Ranking : Your runtime beats 27.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                //cout << i << " " << j << " " << nums[i] + nums[j] << endl;
                if(nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
            
        }
    }
};