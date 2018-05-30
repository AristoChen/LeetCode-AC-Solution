/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 60.08 %
    Runtime : 3 ms
    Testcase : 22 / 22 passed
    Ranking : Your runtime beats 79.01 % of cpp submissions.
}
*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> answer;
        vector<string> temp = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        int index = 0, count = 0;
        
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(temp[j].find(tolower(words[i][0])) != string::npos)
                    index = j;
            }
            for(int k = 1; k < words[i].size(); k++)
            {
                if(temp[index].find(tolower(words[i][k])) != string::npos)
                    count++;
                else 
                    break;
            }
            
            if(count == words[i].size()-1)
                answer.push_back(words[i]);
            count = 0;
        }
        
        return answer;
    }
};