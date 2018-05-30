/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 45.35 %
    Runtime : 65 ms
    Testcase : 122 / 122 passed
    Ranking : Your runtime beats 1.12 % of cpp submissions.
}
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> count;
        int last = 0;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        
        last = count.end()->first+1;
        count[last]++;
        for(int i = 0; i < last; i++)
        {
            if(count[i] != 1)
                return i;            
        }
        return 0;
    }
};