/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> employeeFreeTime(vector<vector<Interval>>& schedule) {
        vector<Interval> temp, answer;
        for(int i = 0; i < schedule.size(); i++)
        {
            for(int j = 0; j < schedule[i].size(); j++)
                temp.push_back(schedule[i][j]);
        }
        
        sort(temp.begin(), temp.end(),[](Interval a, Interval b){return a.start < b.start;});
        
        for(int i = 0; i < temp.size()-1; i++)
        {
            if(temp[i].end >= temp[i+1].start && temp[i].end > temp[i+1].end)
            {
                temp.erase(temp.begin()+i+1);
                i--;
            }
            else if(temp[i].end >= temp[i+1].start && temp[i].end <= temp[i+1].end)
            {
                temp[i].end = temp[i+1].end;
                temp.erase(temp.begin()+i+1);
                i--;
            }
        }
        
        for(int i = 0; i < temp.size()-1; i++)
        {
            if(temp[i].end < temp[i+1].start)
            {
                Interval free;
                free.start = temp[i].end;
                free.end = temp[i+1].start;
                answer.push_back(free);
            }
        }
        
        return answer;
    }
};