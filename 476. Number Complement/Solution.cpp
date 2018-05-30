/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 61.19 %
    Runtime : 8 ms
    Testcase : 149 / 149 passed
    Ranking : Your runtime beats 12.38 % of cpp submissions.
}
*/

class Solution {
public:
    int findComplement(int num) {
        vector<int> temp;
        int answer = 0;
        
        while(num != 0)
        {
            temp.push_back(num % 2);
            num = num / 2;
        }
        
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] == 0)
                temp[i] = 1;
            else if(temp[i] == 1)
                temp[i] = 0;
            
            if(temp[i] == 1)
                answer = answer + pow(2, i);
        }
        return answer;
    }
};