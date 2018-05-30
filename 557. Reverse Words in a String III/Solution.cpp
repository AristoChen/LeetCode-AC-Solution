/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 60.43 %
    Runtime : 25 ms
    Testcase : 30 / 30 passed
    Ranking : Your runtime beats 52.53 % of cpp submissions.
}
*/

class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        string answer = "";
        int temp = 0, test = 0; 
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
            {
                test = i;
                for(int j = temp; j < i; j++)
                {
                    answer += s[test-1];
                    test--;
                }
                answer += " ";
                temp = i+1;
                //cout << temp << " ";
            }
        }
        return answer.substr(0, answer.length()-1);
    }
};