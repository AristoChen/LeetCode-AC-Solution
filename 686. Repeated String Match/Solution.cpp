class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int i = 1;
        
        string MultiA = A;
        //cout << A.back();
        
        while(i <= B.length() / A.length() + 2)
        {
            //cout << MultiA << " ";
            if(MultiA.find(B)!= string::npos)
                return i;
            else
            {
                MultiA += A;
                i++;                
            }
        }
        return -1;
    }
};