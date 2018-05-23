class Solution {
public:
    void reverseWords(vector<char>& str) {
        if(str.size() == 0)
            return;
        
        string s = "";
        for(int i = 0; i < str.size(); i++)
            s += str[i];
            
        reverse(s.begin(), s.end());
        while(s[0] == ' ')
            s.erase(0, 1);
        while(s[s.length()-1] == ' ')
            s.pop_back();
        
        int index = 0;
        s += " ";
        for(int i = 0; i < s.length(); i++)
        {
            if(isspace(s[i]) && isspace(s[i+1]))
            {
                s.erase(i, 1);
                i--;
            }
            
            else if(isspace(s[i]) && !isspace(s[i+1]))
            {
                reverse(s.begin()+index, s.begin()+i);
                index = i+1;                
            }    
        }
        s = s.substr(0, s.length()-1);
        
        str= {};
        for(int i = 0; i < s.length(); i++)
            str.push_back(s[i]);
    }
};