class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> answer{1}, temp = {1};
        if(rowIndex == 0)
            return answer;
        
        temp.push_back(1);
        answer = temp;
        if(rowIndex == 1)
            return answer;
        
        for(int i = 2; i <= rowIndex; i++)
        {
            answer = {1};
            for(int j = 0; j < temp.size()-1; j++)
                answer.push_back(temp[j] + temp[j+1]);
            answer.push_back(1);
            temp = answer;
        }
        return answer;
    }
};