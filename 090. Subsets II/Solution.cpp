/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 38.71 %
    Runtime : 13 ms
    Testcase : 19 / 19 passed
    Ranking : Your runtime beats 18.91 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> flag(nums.size(), 0);
        int carry = 1;
        
        for(int i = 0; i < pow(2, nums.size()); i++)
        {
            vector<int> temp;
            for(int j = 0; j < flag.size(); j++)
            {   
                if(flag[j] == 1)
                    temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            if(find(answer.begin(), answer.end(), temp) == answer.end())
                answer.push_back(temp);
            
            
            for(int j = flag.size()-1; j >= 0; j--)
            {
                if(carry == 1)
                {
                    flag[j] += 1;
                    carry = 0;
                    if(flag[j] > 1)
                    {
                        carry = 1;
                        flag[j] = 0;
                    }
                }    
            }
            carry = 1;
        }
        
        return answer;
    }
};