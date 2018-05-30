/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 51.45 %
    Runtime : 10 ms
    Testcase : 54 / 54 passed
    Ranking : Your runtime beats 13.34 % of cpp submissions.
}
*/

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