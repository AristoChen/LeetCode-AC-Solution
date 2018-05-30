/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.35 %
    Runtime : 21 ms
    Testcase : 202 / 202 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        if(S.length() < 3)
            return {};
        vector<vector<int>> answer;
        char current = S[0];
        int count = 1, start = 0, end = 0;
        for(int i = 1; i < S.length(); i++)
        {
            if(S[i] == current)
                count++;
            else if(S[i] != current)
            {
                if(count >= 3)
                {
                    end = i-1;
                    answer.push_back({});
                    answer.back().push_back(start);
                    answer.back().push_back(end);
                }   
                current = S[i];
                start = i;
                count = 1;
            }
            
            if(i == S.length()-1 && count >= 3)
            {
                end = i;
                answer.push_back({});
                answer.back().push_back(start);
                answer.back().push_back(end);
            }
        }
        return answer;
    }
};