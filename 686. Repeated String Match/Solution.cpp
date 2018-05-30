/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 31.77 %
    Runtime : 18 ms
    Testcase : 51 / 51 passed
    Ranking : Your runtime beats 75.09 % of cpp submissions.
}
*/

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