class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.length(); i++)
        {
            if(!isalpha(s[i]) && !isdigit(s[i]))
            {
                s.erase(i,1);
                i--;
            }
        }
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(s == temp)
            return true;
        return false;
    }
};