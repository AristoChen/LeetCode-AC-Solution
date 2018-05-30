/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 33.28 %
    Runtime : 100 ms
    Testcase : 32 / 32 passed
    Ranking : Your runtime beats 20.44 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> count;
        vector<string> answer;
        
        for(int i = 0; i < s.length(); i++)
            count[s.substr(i, 10)]++;
        
        for(map<string, int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second > 1)
                answer.push_back(i->first);
        }
        
        return answer;
    }
};