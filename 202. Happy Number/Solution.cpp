/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 41.89 %
    Runtime : 4 ms
    Testcase : 401 / 401 passed
    Ranking : Your runtime beats 85.26 % of cpp submissions.
}
*/

class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        while(n > 4)
        {
            string temp = to_string(n);
            n = 0;
            for(int i = 0 ; i < temp.length(); i++)
                n += pow(int(temp[i])-48, 2);
            if(n == num)
                break;
        }
        
        if(n == 1)
            return true;
        else
            return false;
    }
};