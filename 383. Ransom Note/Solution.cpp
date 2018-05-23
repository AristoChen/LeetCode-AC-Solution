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