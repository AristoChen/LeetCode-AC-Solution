/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 45.52 %
    Runtime : 8 ms
    Testcase : 10 / 10 passed
    Ranking : Your runtime beats 29.59 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> answer(pow(2,size));
        vector<int> flag(size, 0);
        int carry = 1;
        
        for(int i = 0; i < (pow(2, size)); i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(flag[j] == 1)          
                    answer[i].push_back(nums[j]);
                
                flag[j] += carry;
                carry = 0;

                if(flag[j] > 1)
                {
                    flag[j] = 0;
                    carry = 1;    
                }   
            }
            carry = 1;         
        }
        return answer;
    }
};