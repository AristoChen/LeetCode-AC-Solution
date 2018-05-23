class Solution {
public:
    int countSubstrings(string s) {
        int answer = 0;
        int length = s.length();
        
        for(int i = 0; i < length; i++)
        {
            for(int j = i; j <= length; j++)
            {
                if(isPalindrom(s.substr(i, j-i)))
                    answer++;
            }
        }
        
        return answer;
    }
    
    bool isPalindrom(string s)
    {
        if(s.length() == 0)
            return false;
        else
        {
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] != s[s.length()-i-1])
                    return false;
            }
            return true;
        }
    }
};