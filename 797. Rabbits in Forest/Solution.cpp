class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int answer = 0;
        map<int,int> count;
        for(int i : answers)
            count[i]++;
        
        for(map<int,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second > i->first+1)
            {
                answer += (i->second/(i->first+1)) * (i->first+1);
                if(i->second % (i->first+1) != 0)
                    answer += (i->first+1);
            }
            else
                answer += (i->first+1);
        }
        
        return answer;
    }
};