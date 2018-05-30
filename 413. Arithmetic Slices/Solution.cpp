/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 54.46 %
    Runtime : 4 ms
    Testcase : 15 / 15 passed
    Ranking : Your runtime beats 80.31 % of cpp submissions.
}
*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size() < 3)
            return 0;
        int answer = 0, count = 0;
        for(int i = 0; i < A.size()-2; i++)
        {
            if(A[i+2]-A[i+1] == A[i+1]-A[i])
            {
                answer += (1+count);
                count++;
            }    
            else
                count = 0;            
        }
        
        return answer;
    }
};