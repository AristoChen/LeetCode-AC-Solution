/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 46.99 %
    Runtime : 38 ms
    Testcase : 89 / 89 passed
    Ranking : Your runtime beats 77.74 % of cpp submissions.
}
*/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {   
        int frequency = 0, minLength = INT_MAX;
        map<int, vector<int>> count;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count[nums[i]].size() == 0)
            {
                count[nums[i]].push_back(1);
                count[nums[i]].push_back(i);
            }
            else if(count[nums[i]].size() != 0)
            {
                count[nums[i]][0]++;
                count[nums[i]].push_back(i);
            }
        }
        
        for(map<int,vector<int>>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second[0] > frequency)
            {
                frequency = i->second[0];
                minLength = i->second.back()-i->second[1]+1;
            }
            else if(i->second[0] == frequency)
                minLength = min(minLength, i->second.back()-i->second[1]+1);
        }
        
        return minLength;
    }
};