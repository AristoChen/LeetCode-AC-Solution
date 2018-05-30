/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 49.61 %
    Runtime : 7 ms
    Testcase : 54 / 54 passed
    Ranking : Your runtime beats 57.72 % of cpp submissions.
}
*/

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