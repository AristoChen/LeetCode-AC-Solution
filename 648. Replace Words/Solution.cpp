/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 48.293145489 %
    Runtime : 839 ms
    Testcase : 124 / 124 passed
    Ranking : Your runtime beats 8.48 % of cpp submissions.
}
*/

class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        vector<string> temp;
        int pos = 0;
        sentence += " ";
        string answer = "";
        
        sort(dict.begin(), dict.end());
        for(int i = 0; i < dict.size()-1; i++)
        {
            if(dict[i+1].find(dict[i]) == 0)
            {
                dict.erase(dict.begin()+i+1);
                i--;                
            }
        }
        
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] == ' ')
            {
                temp.push_back(" " + sentence.substr(pos, i-pos));
                pos = i+1;
            }
        }
        
        for(int i = 0; i < dict.size(); i++)
        {
            for(int j = 0; j < temp.size(); j++)
            {
                if(temp[j].find(dict[i]) == 1)
                {
                    temp[j] = dict[i];
                    i--;
                }
            }
        }
        
        for(string i : temp)
        {
            if(i[0] == ' ')
                answer += i;
            else
                answer += " " + i;        
        }
        if(answer[0] == ' ')
            answer.erase(0, 1);
        
        return answer;
    }
};