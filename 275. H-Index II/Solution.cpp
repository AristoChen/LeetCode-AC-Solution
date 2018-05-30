/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 34.96 %
    Runtime : 62 ms
    Testcase : 83 / 83 passed
    Ranking : Your runtime beats 21.88 % of cpp submissions.
}
*/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int answer = 0;
        
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