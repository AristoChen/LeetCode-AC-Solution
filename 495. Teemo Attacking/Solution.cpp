class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size() == 0)
            return 0;
        int answer = 0;
        for(int i = 0; i < timeSeries.size()-1; i++)
        {
            if(timeSeries[i+1]-timeSeries[i] < duration)
                answer += (timeSeries[i+1]-timeSeries[i]);
            else if(timeSeries[i+1]-timeSeries[i] >= duration)
                answer += duration;
        }
        answer += duration;
        return answer;
    }
};