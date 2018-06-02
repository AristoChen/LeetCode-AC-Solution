/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 26.4937803758 %
    Runtime : 10 ms
    Testcase : 252 / 252 passed
    Ranking : Your runtime beats 23.85 % of cpp submissions.
}
*/

class Solution {
public:
    string simplifyPath(string path) {
        string answer = "/";
        int pos = 1;
        vector<string> temp;
        
        for(int i = 0; i < path.length()-1; i++)
        {
            if(path[i] == '/' && path[i+1] == '/')
            {
                path.erase(i, 1);
                i--;
            }
        }
        if(path.back() != '/')
           path += "/";
        for(int i = 1; i < path.length(); i++)
        {
            if(path[i] == '/')
            {
                temp.push_back(path.substr(pos, i-pos));
                pos = i+1;            
            }
        }
        
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] != "." && temp[i] != "..")
                answer += temp[i] + "/";
            else if(temp[i] == ".." && answer.length() != 1)
            {
                answer.pop_back();
                int pos = find(answer.rbegin(), answer.rend(), '/') - answer.rbegin();
                answer = answer.substr(0, answer.length()-pos);
            }    
        }
        if(answer.back() == '/' && answer.length() != 1)
            answer.pop_back();
        return answer;
    }
};