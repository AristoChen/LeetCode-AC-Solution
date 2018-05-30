/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 53.52 %
    Runtime : 20 ms
    Testcase : 30 / 30 passed
    Ranking : Your runtime beats 14.66 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> temp;
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++)
            temp[nums[i]]++;
        for(map<int, int>::iterator i = temp.begin(); i != temp.end(); i++)
        {
            if(i->second == 1)
                answer.push_back(i->first);
        }
        return answer;   
    }
};