/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 32.52 %
    Runtime : 605 ms
    Testcase : 156 / 156 passed
    Ranking : Your runtime beats 12.84 % of cpp submissions.
}
*/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> temp(1, 1);
        int i = 2, limit = num / 2;
        
        if(num <= 1)
            return false;
        
        while(i <= limit)
        {
            if(num % i == 0)
            {
                if(find(temp.begin(), temp.end(), i) == temp.end())
                {
                    temp.push_back(i);
                    temp.push_back(num/i);
                    limit = num / i;                    
                }
            }
            i++;
        }
        for(int j = 0; j < temp.size(); j++)
        {
            //cout << temp[j] << " ";
            num = num - temp[j];    
        }
        if(num != 0)
            return false;
            
        return true;
    }
};