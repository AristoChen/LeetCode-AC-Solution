/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.38 %
    Runtime : 18 ms
    Testcase : 110 / 110 passed
    Ranking : Your runtime beats 51.94 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> temp;
        vector<string> answer(k);
        int currentMax = 0;
        string key = "";
        
        for(int i = 0; i < words.size(); i++)
            temp[words[i]]++;        
            
        for(int i = 0; i < k; i++)
        {
            for(map<string, int>::iterator j = temp.begin(); j != temp.end(); j++)
            {
                if(j->second > currentMax)
                {
                    currentMax = j->second;
                    key = j->first;                    
                }
            }
            answer[i] = key;
            temp.erase(key);
            currentMax = 0;
        }
        
        return answer;
    }
};