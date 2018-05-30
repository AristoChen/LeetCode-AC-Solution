/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 32.13 %
    Runtime : 1072 ms
    Testcase : 57 / 57 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> index(difficulty.size());
        int answer = 0, maxProfit = 0;
        for(int i = 0; i < difficulty.size(); i++)
            index[i] = make_pair(difficulty[i], profit[i]);
        
        sort(index.begin(), index.end(),[] (pair<int,int> a, pair<int,int> b){return a.first < b.first;});
        
        for(int i = 0; i < worker.size(); i++)
        {
            for(int j = 0; j < index.size(); j++)
            {
                if(worker[i] >= index[j].first && index[j].second > maxProfit)
                    maxProfit = index[j].second;
                else if(worker[i] < index[j].first)
                    break;                    
            }
            answer += maxProfit;
            maxProfit = 0;
        }
        
        return answer;
    }
};