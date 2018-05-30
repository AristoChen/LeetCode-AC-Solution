/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 53.02 %
    Runtime : 277 ms
    Testcase : 37 / 37 passed
    Ranking : Your runtime beats 23.91 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        int next = INT_MAX;
        map<int, int> index;
        
        for(int i = temperatures.size()-1; i >= 0; i--)
        {
            index[temperatures[i]] = i;
            for(map<int,int>::iterator j = index.lower_bound(temperatures[i]); j != index.end(); j++)
            {
                if(temperatures[i] < j->first)
                    next = min(next, j->second);             
            }
            if(next != INT_MAX)
                answer[i] = next - i;
            next = INT_MAX;
        }
        
        return answer;
    }
};