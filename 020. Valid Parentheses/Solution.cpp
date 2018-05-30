/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 34.14 %
    Runtime : 4 ms
    Testcase : 73 / 73 passed
    Ranking : Your runtime beats 95.53 % of cpp submissions.
}
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for(int i = 0; i < s.size(); i++)
        {
            switch(s[i])
            {
                case '(':
                    temp.push(s[i]);
                    break;
                
                case '[':
                    temp.push(s[i]);
                    break;
                    
                case '{':
                    temp.push(s[i]);
                    break;
                    
                case ')':
                    if(temp.empty() || temp.top() != '(')
                        return false;
                    else
                        temp.pop();
                    break;
                    
                case ']':
                    if(temp.empty() || temp.top() != '[')
                        return false;
                    else
                        temp.pop();
                    break;
                    
                case '}':
                    if(temp.empty() || temp.top() != '{')
                        return false;
                    else
                        temp.pop();
                    break;
                    
                default: ;
            }
        }
        return temp.empty();
    }
};