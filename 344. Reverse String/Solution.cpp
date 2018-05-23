class Solution {
public:
    string reverseString(string s) {
        string answer = "";
        for(int i = s.length()-1; i >= 0; i--)
            answer += s[i];
        return answer;
    }
};