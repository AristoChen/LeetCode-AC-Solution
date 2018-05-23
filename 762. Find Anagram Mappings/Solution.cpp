class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> answer(A.size(), 0);
        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0; j < A.size(); j++)
            {
                if(A[i] == B[j])
                {
                    answer[i] = j;
                    break;
                }
            }
        }
        return answer;
    }
};