/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 33.83 %
    Runtime : 4 ms
    Testcase : 82 / 82 passed
    Ranking : Your runtime beats 97.33 % of cpp submissions.
}
*/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int answer = 0;
        
        sort(citations.begin(), citations.end());
        for(int i = 0; i < citations.size(); i++)
        {
            if(citations[citations.size()-i-1] >= i+1)
                answer = max(answer, i+1);
            else
                break;
        }
        
        return answer;
    }
};