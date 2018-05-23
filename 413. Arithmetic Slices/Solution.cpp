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