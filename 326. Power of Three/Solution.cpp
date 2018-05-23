class Solution {
public:
    bool isPowerOfThree(int n) {
        int const Max3PowerInt = 1162261467;
        if(n <= 0 || n > Max3PowerInt) 
            return false;
        return Max3PowerInt % n == 0;
    }
};