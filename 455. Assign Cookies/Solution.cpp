/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.30 %
    Runtime : 73 ms
    Testcase : 21 / 21 passed
    Ranking : Your runtime beats 7.04 % of cpp submissions.
}
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int answer = 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        for(int i = 0; i < g.size(); i++)
        {
            if(s.size() == 0)
                break;
            if(g[i] <= s[0])
                answer++;
            else if(g[i] > s[0])
                i--;
            
            s.erase(s.begin());
        }
        
        return answer;
    }
};