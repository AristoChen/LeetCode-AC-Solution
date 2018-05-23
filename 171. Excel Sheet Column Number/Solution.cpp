class Solution {
public:
    int titleToNumber(string s) {
        int answer = 0;
        for(int i = 0; i < s.length(); i++)
            answer += (int(s[i])-64) * pow(26, s.length()-i-1);
        return answer;
    }
};