class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 0)
            return true;
        for(int i = 1; i <= sqrt(c); i++)
        {
            if(pow(int(sqrt(c-pow(i,2))),2) + pow(i,2) == c)
                return true;
        }
        return false;
    }
};