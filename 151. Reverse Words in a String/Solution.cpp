class Solution {
public:
    void reverseWords(string &s) {
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
    }
};