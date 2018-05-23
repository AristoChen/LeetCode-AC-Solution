class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);
        vector<int> temp = {1};
        
        if(numRows == 0)
            return answer;
        
        answer[0].push_back(1);
        if(numRows == 1)
            return answer;
        
        temp.push_back(1);
        answer[1] = temp;
        if(numRows == 2)
            return answer;
        
        for(int i = 2; i < numRows; i++)
        {
            answer[i].push_back(1);
            for(int j = 0; j < temp.size()-1; j++)
            {
                answer[i].push_back(temp[j] + temp[j+1]);
            }
            answer[i].push_back(1);
            temp = answer[i];
        }
        return answer;
    }
};