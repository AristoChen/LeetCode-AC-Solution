class Solution {
public:
    int findLHS(vector<int>& nums) {
        int answer = 0, previousVal = 0;
        map<int,int> count;
        for(int i:nums)
            count[i]++;
        previousVal = count.begin()->first;
        for(map<int,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->first - previousVal == 1)
                answer = max(answer, count[previousVal] + i->second);
            previousVal = i->first;
        }
        return answer;
    }
};