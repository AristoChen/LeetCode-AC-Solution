/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 49.40 %
    Runtime : 6 ms
    Testcase : 46 / 46 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        map<string, int> count;
        int previousPos = 0;
        int max = 0;
        string answer = "";
        
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);        
        paragraph += " ";
        for(int i = 0; i < paragraph.length(); i++)
        {
            if(!isalpha(paragraph[i]) && !isspace(paragraph[i]))
            {
                paragraph.erase(i, 1);
                i--;
            }            
            if(isspace(paragraph[i]))
            {
                count[paragraph.substr(previousPos, i-previousPos)]++;
                previousPos = i+1;
            }
        }
        
        for(map<string, int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second > max && (find(banned.begin(), banned.end(), i->first) == banned.end()))
            {
                answer = i->first;
                max = i->second;                
            }
        }
        
        return answer;;
    }
};