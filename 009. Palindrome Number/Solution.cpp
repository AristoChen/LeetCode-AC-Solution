/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 36.52 %
    Runtime : 296 ms
    Testcase : 11507 / 11507 passed
    Ranking : Your runtime beats 23.10 % of cpp submissions.
}
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        vector<int> temp(0);
        while(x != 0)
        {
            temp.push_back(x % 10);
            x = x / 10;
        }
        
        int size = temp.size();
        
        if(size == 1)
            return true;
        
        for(int i = 0; i < size; i++)
        {
            if(temp[i] != temp[size-i-1])
                return false;
        }
        return true;
    }
};