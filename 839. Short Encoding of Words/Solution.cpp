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