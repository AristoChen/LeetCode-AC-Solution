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