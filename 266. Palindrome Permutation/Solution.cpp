class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char, int> count;
        int odd = 0;
        for(int i = 0; i < s.length(); i++)
            count[s[i]]++;
        for(map<char,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second % 2 == 1)
            {
                odd++;
                if(odd > 1)
                    return false;
            }
        }
        return true;
    }
};