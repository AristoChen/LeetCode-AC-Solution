/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.27 %
    Runtime : 80 ms
    Testcase : 104 / 104 passed
    Ranking : Your runtime beats 28.92 % of cpp submissions.
}
*/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> uniqueChar;
        vector<int> frequency;
        
        for(int i = 0; i < s.length(); i++)
        {
            auto Pos = find(uniqueChar.begin(), uniqueChar.end(), s[i]);
            
            if(Pos == uniqueChar.end())
            {
                uniqueChar.push_back(s[i]);
                frequency.push_back(1);
            }
            else
                frequency[Pos - uniqueChar.begin()]++;
        }
        
        for(int i = 0; i < uniqueChar.size(); i++)
        {
            if(frequency[i] == 1)
                return s.find(uniqueChar[i]);
        }
        
        return -1;
    }
};