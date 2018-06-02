/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 38.6585812118 %
    Runtime : 4 ms
    Testcase : 111 / 111 passed
    Ranking : Your runtime beats 99.51 % of cpp submissions.
}
*/

class Solution {
public:
    int maximumSwap(int num) {
        string origin = to_string(num), temp = origin;
        char swap;
        
        for(int i = 0; i < origin.size()-1; i++)
        {
            for(int j = i+1; j < origin.size(); j++)
            {
                swap = temp[i];
                temp[i] = temp[j];
                temp[j] = swap;
                num = max(num, stoi(temp));
                temp = origin;
            }
        }
        
        return num;
    }
};