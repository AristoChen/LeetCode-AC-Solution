class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> answer;
        vector<int> combination;
        
        calculate(answer, combination, n, 1, k);
        
        return answer;
    }
    
    void calculate(vector<vector<int>>& answer, vector<int>& combination, int target, int begin, int count)
    {
        if(target == 0 && count == 0)
        {
            answer.push_back(combination);
            return;
        }
        else
        {
            for(int i = begin; i < 10; i++)
            {
                if(target >= i)
                {
                    combination.push_back(i);
                    calculate(answer, combination, target-i, i+1, count-1);
                    combination.pop_back();
                }
            }
        }
    }
};