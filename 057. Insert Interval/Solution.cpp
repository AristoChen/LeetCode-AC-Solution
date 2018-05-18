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
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		intervals.push_back(newInterval);
		sort(intervals.begin(), intervals.end(), [](Interval a, Interval b) {return a.start < b.start; });

		for (int i = 0; i < intervals.size() - 1; i++)
		{
			if (intervals[i].end >= intervals[i + 1].start && intervals[i].end <= intervals[i + 1].end)
			{
				intervals[i].end = intervals[i + 1].end;
				intervals.erase(intervals.begin() + i + 1);
				i--;
			}
			else if (intervals[i].end > intervals[i + 1].start && intervals[i].end > intervals[i + 1].end)
			{
				intervals.erase(intervals.begin() + i + 1);
				i--;
			}
		}
		return intervals;
	}
};