/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.84 %
    Runtime : 20 ms
    Testcase : 34 / 34 passed
    Ranking : Your runtime beats 41.05 % of cpp submissions.
}
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        map<char, int> count;
        for(int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        for(map<char, int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second != 0)
                return false;
        }
        return true;
    }
};