/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 35.83 %
    Runtime : 8 ms
    Testcase : 70 / 70 passed
    Ranking : Your runtime beats 82.94 % of cpp submissions.
}
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int startPos = 0, answer = 0, temp = 1;
        
        chars.push_back('!');
        for(int i = 1; i < chars.size(); i++)
        {
            if(chars[i] == chars[startPos])
                temp++;
            else if(chars[i] != chars[startPos])
            {
                if(temp == 1)
                {
                    answer++;
                    startPos = answer;
                    i = startPos;
                    continue;
                }
                string tempStr = to_string(temp);
                answer += tempStr.length()+1;
                temp = 1;
                chars.erase(chars.begin()+startPos, chars.begin()+i-1);
                for(int j = tempStr.length()-1; j >= 0; j--)
                    chars.insert(chars.begin()+startPos+1, tempStr[j]);
                startPos = answer;
                i = startPos;
            }
        }
        
        return answer;
    }
};