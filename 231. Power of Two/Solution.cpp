class Solution {
public:
    bool isPowerOfTwo(int n) {
        int maxInt = 1073741824;
        if(n > 0)
        {
            if(maxInt % n == 0)
                return true;
        }
        return false;
    }
};