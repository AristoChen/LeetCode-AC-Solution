/*
Submission Detail:{
    Difficulty : Hard
    Acceptance Rate : 26.06 %
    Runtime : 8 ms
    Testcase : 157 / 157 passed
    Ranking : Your runtime beats 30.56 % of cpp submissions.
}
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> count;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        
        int last = count.end()->first+1;
        count[last] = 0;
        for(int i = 1; i <= count.end()->first; i++)
        {
            if(count[i] < 1)
                return i;
        }
        return 1;
    }
};