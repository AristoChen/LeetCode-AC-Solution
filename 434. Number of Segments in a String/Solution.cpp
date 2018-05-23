class Solution {
public:
    int countSegments(string s) {
        if(s.length() == 0)
            return 0;
        s = " " + s;
        int answer = 0;
        for(int i = 0; i < s.length()-1; i++)
        {
            if(isspace(s[i]) && !isspace(s[i+1]))
                answer++;
        }
        
        return answer;
    }
};