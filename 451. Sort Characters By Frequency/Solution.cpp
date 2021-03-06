/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 52.01 %
    Runtime : 17 ms
    Testcase : 35 / 35 passed
    Ranking : Your runtime beats 84.85 % of cpp submissions.
}
*/

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> temp;
        int currentMax = 0;
        string answer = "", currentChar = "";
        
        for(int i = 0; i < s.length(); i++)
            temp[s[i]]++;
        
        while(!temp.empty())    
        {
            for(map<char, int>::iterator j = temp.begin(); j != temp.end(); j++)
            {
                if(j->second > currentMax)
                {
                    currentMax = j->second;
                    currentChar = j->first;                    
                }
            }
            for(int k = 0; k < currentMax; k++)
                answer += currentChar;
            
            temp.erase(currentChar[0]);            
            currentMax = 0;
            currentChar = "";
        }
        return answer;
    }
};