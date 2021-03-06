/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.42 %
    Runtime : 10 ms
    Testcase : 60 / 60 passed
    Ranking : Your runtime beats 24.74 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> count1;
        map<int, int> count2;
        vector<int> answer;
        
        for(int i = 0; i < nums1.size(); i++)
            count1[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
            count2[nums2[i]]++;
        
        for(map<int,int>::iterator i = count1.begin(); i != count1.end(); i++)
        {
            if(count2[i->first])
                answer.push_back(i->first);
        }
        
        return answer;
    }
};
