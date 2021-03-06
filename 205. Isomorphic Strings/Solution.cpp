/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 34.92 %
    Runtime : 10 ms
    Testcase : 30 / 30 passed
    Ranking : Your runtime beats 63.95 % of cpp submissions.
}
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        map<char, char> temp;
        for(int i = 0; i < s.length(); i++)
        {
            if(temp.find(s[i]) == temp.end())
                temp[s[i]] = t[i];
            else
            {
                if(temp[s[i]] != t[i])
                    return false;
            }
        }
        
        map<char, int> count;
        for(map<char, char>::iterator i = temp.begin(); i != temp.end(); i++)
        {
            count[i->second]++;
            if(count[i->second] > 1)
                return false;
        }
        
        return true;
    }
};