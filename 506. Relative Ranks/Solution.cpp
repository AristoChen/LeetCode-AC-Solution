/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.10 %
    Runtime : 12 ms
    Testcase : 17 / 17 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int,int>> temp(nums.size());
        vector<string> answer(nums.size());
        
        for(int i = 0; i < nums.size(); i++)
            temp[i] = make_pair(nums[i], i);
        
        sort(temp.begin(), temp.end(), [] (pair<int,int> a, pair<int,int> b) {return a.first > b.first;});
        
        for(int i = 0; i < answer.size(); i++)
        {
            if(i == 0)
                answer[temp[i].second] = "Gold Medal";
            else if(i == 1)
                answer[temp[i].second] = "Silver Medal";
            else if(i == 2)
                answer[temp[i].second] = "Bronze Medal";
            else
                answer[temp[i].second] = to_string(i+1);
        }
            
        return answer;
    }
};