/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 63.24 %
    Runtime : 16 ms
    Testcase : 52 / 52 passed
    Ranking : Your runtime beats 75.20 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> count;
        int times, previousPos = 0;
        vector<string> answer;
        for(int i = 0; i < cpdomains.size(); i++)
        {
            for(int j = 0; j < cpdomains[i].length(); j++)
            {
                if(isspace(cpdomains[i][j]))
                {
                    times = stoi(cpdomains[i].substr(0,j));
                    count[cpdomains[i].substr(j+1, cpdomains[i].length()-j)] += times;
                }
                else if(cpdomains[i][j] == '.')
                    count[cpdomains[i].substr(j+1, cpdomains[i].length()-j)] += times;    
            }
        }
        
        for(map<string, int>::iterator i = count.begin(); i != count.end(); i++)
            answer.push_back(to_string(i->second) + " " + i->first);
        
        return answer;
    }
};