class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char answer = 0;
        
        for(int i = 0; i < s.length(); i++)
            answer = answer ^ s[i];
        for(int j = 0; j < t.length(); j++)
            answer = answer ^ t[j];
        
        return answer;
    }
};