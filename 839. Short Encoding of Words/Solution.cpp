/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 40.65 %
    Runtime : 506 ms
    Testcase : 30 / 30 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(),[](string a, string b){return a.length() > b.length();});
        string answer = "";
        for(int i = 0; i < words.size(); i++)
        {
            if(answer.find(words[i]+"#") == string::npos)
                answer += words[i] + "#";
        }
        
        return answer.length();
    }
};