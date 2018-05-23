class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> count;
        int answer = 0, oddFlag = 0;
        for(int i = 0; i < s.length(); i++)
            count[s[i]]++;
        for(map<char,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second % 2 == 0)
                answer += i->second;
            if(i->second % 2 == 1)
            {
                if(i->second > 2)
                    answer += (i->second-1);
                oddFlag = 1;
            }
        }
        if(oddFlag == 1)
            answer++;
        return answer;
    }
};