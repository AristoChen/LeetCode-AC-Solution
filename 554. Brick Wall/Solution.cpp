class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        vector<int> gap;
        int tempGap = 0, totalLength = 0, crossBrick = 0, answer = INT_MAX;
        
        for(int i = 0; i < wall[0].size(); i++)
            totalLength += wall[0][i];
        
        for(int i = 0; i < wall.size(); i++)
        {
            for(int j = 0; j < wall[i].size(); j++)
            {
                tempGap += wall[i][j];
                if(tempGap != totalLength)
                {
                    if(find(gap.begin(), gap.end(), tempGap) == gap.end())
                        gap.push_back(tempGap);
                }
            }
            tempGap = 0;
        }
        
        for(int i = 0; i < gap.size(); i++)
        {
            for(int j = 0; j < wall.size(); j++)
            {
                tempGap = 0;
                for(int k = 0; k < wall[j].size(); k++)
                {
                    tempGap += wall[j][k];
                    if(gap[i] == tempGap)
                        break;
                    else if(tempGap > gap[i])
                    {
                        crossBrick++;
                        break;                        
                    }
                }
            }
            answer = min(answer, crossBrick);
            crossBrick = 0;
        }
        if(answer == INT_MAX)
            answer = wall.size();
        return answer;
    }
};