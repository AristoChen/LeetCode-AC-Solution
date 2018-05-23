class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> targetPos;
        vector<int> answer(S.length());
        int index = 0;
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == C)
                targetPos.push_back(i);
        }
        
        for(int i = 0; i < answer.size(); i++)
        {
            if(S[i] == C)
                answer[i] = 0;
            else
            {
                if(index == 0)
                    answer[i] = abs(i-targetPos[index]);
                else if(index+1 <= targetPos.size())
                    answer[i] = min(abs(i-targetPos[index]), abs(i-targetPos[index-1]));
                else if(index+1 >= targetPos.size())
                    answer[i] = abs(i-targetPos[index]);
            }
            if(i == targetPos[index] && index < targetPos.size()-1)
                index++;
        }
        
        return answer;
    }
};