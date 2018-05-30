/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.89 %
    Runtime : 38 ms
    Testcase : 126 / 126 passed
    Ranking : Your runtime beats 29.44 % of cpp submissions.
}
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> ransomCount, magazineCount;
        for(char i : ransomNote)
            ransomCount[i]++;
        for(char i : magazine)
            magazineCount[i]++;
        for(map<char,int>::iterator i = ransomCount.begin(); i != ransomCount.end(); i++)
        {
            if(magazineCount[i->first] < i->second)
                return false;
        }
        return true;
    }
};