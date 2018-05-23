class Solution {
public:
    bool rotateString(string A, string B) {
        if(A == B)
            return true;
        if(A.length() == 0 || B.length() == 0)
            return false;
        
        int count = 0;
        while(count < A.length())
        {
            if(A == B)
                return true;
            else
            {
                A += A[0];
                A.erase(0, 1);
                count++;
            }
        }
        return false;
    }
};