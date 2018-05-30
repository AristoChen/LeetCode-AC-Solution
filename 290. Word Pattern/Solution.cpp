/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 33.59 %
    Runtime : 3 ms
    Testcase : 33 / 33 passed
    Ranking : Your runtime beats 53.82 % of cpp submissions.
}
*/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        str += " ";
        
        map<string, char> temp;
        map<char, int> count;
        int spaces = 0, patternIndex = 0, strIndex = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(isspace(str[i]))
            {
                if(temp.find(str.substr(strIndex, i-strIndex)) == temp.end())
                    temp[str.substr(strIndex, i-strIndex)] = pattern[patternIndex];
                else
                {
                    if(temp[str.substr(strIndex, i-strIndex)] != pattern[patternIndex])
                        return false;
                }
                    
                strIndex = i+1;
                spaces++;
                patternIndex++; 
            }
        }
        
        if(pattern.length() != spaces)
            return false;        
        else
        {
            for(map<string, char>::iterator i = temp.begin(); i != temp.end(); i++)
            {
                count[i->second]++;
                if(count[i->second] > 1)
                    return false;
            }
        }
        
        return true;
    }
};