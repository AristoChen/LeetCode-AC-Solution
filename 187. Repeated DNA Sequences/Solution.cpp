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