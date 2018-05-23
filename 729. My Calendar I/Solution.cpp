class MyCalendar {
public:
    vector<pair<int,int>> schedule;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(schedule.size() == 0)
        {
            schedule.push_back({start, end});
            return true;
        }
        else
        {
            for(int i = 0; i < schedule.size(); i++)
            {
                if(start >= schedule[i].first && start < schedule[i].second)
                    return false;
                if(end > schedule[i].first && end <= schedule[i].second)
                    return false;
                if(schedule[i].first >= start && schedule[i].first < end)
                    return false;
                if(schedule[i].second > start && schedule[i].second <= end)
                    return false;
            }
            schedule.push_back({start, end});
            return true;
        }
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * bool param_1 = obj.book(start,end);
 */