class Solution {
public:
    string convertToTitle(int n) {
        string answer = "";
        while(n > 0)
        {
            n--;
            answer = static_cast<char>('A' + n%26) + answer;
            n = n/26;
        }
        return answer;
    }
};