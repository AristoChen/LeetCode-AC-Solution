/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 35.50 %
    Runtime : 516 ms
    Testcase : 30 / 30 passed
    Ranking : Your runtime beats 1.08 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> combination;
        vector<int> factorial(nums.size(), 1);
        for(int i = 1; i < factorial.size(); i++)
            factorial[i] = factorial[i-1]*(i+1);
        for(int i = 1; i <= factorial.back(); i++)
        {
            combination = calculate(nums, factorial, i);
            if(find(answer.begin(), answer.end(), combination) == answer.end())
                answer.push_back(combination);
        }
        
        return answer;
    }
    
    vector<int> calculate(vector<int> nums, vector<int>factorial, int k)
    {
        vector<int> combination;
        int index = 0;
        for(int i = factorial.size()-2; i >= 0; i--)
        {
            index = k % factorial[i] == 0? k/factorial[i]-1 : k/factorial[i];
            combination.push_back(nums[index]);
            nums.erase(nums.begin()+index);
            k -= index*factorial[i];
        }
        combination.push_back(nums[0]);
        return combination;
    }
};