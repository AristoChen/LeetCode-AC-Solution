/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 20.99 %
    Runtime : 4 ms
    Testcase : 72 / 72 passed
    Ranking : Your runtime beats 15.63 % of cpp submissions.
}
*/

class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> temp1, temp2;
        int pos = 0;
        version1 += '.', version2 += '.';
        for(int i = 0; i < version1.length(); i++)
        {
            if(version1[i] == '.')
            {
                temp1.push_back(stoi(version1.substr(pos, i-pos)));
                pos = i+1;
            }
        }
        pos = 0;
        for(int i = 0; i < version2.length(); i++)
        {
            if(version2[i] == '.')
            {
                temp2.push_back(stoi(version2.substr(pos, i-pos)));
                pos = i+1;
            }
        }
        while(temp1.back() == 0) 
            temp1.pop_back();
        while(temp2.back() == 0)
            temp2.pop_back();
        
        while(temp1.size() != 0 && temp2.size() != 0)
        {
            if(temp1[0] == temp2[0])
            {
                temp1.erase(temp1.begin());
                temp2.erase(temp2.begin());
                continue;
            }
            else if(temp1[0] > temp2[0])
                return 1;
            else if(temp1[0] < temp2[0])
                return -1;
        }
        if(temp1.size() == 0 && temp2.size() != 0)
            return -1;
        else if(temp1.size() != 0 && temp2.size() == 0)
            return 1;
        
        return 0;
    }
};