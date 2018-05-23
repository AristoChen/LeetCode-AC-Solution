class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> temp(9);
        vector<int> answer(num + 1);
        int powCount = 3, plusCount = 1;
        
        temp = {0, 1, 1, 2, 1, 2, 2, 3, 1};

        
        for(int i = 0; i < num + 1; i++)
        {
            if(i <= 8)
                answer[i] = temp[i];            
            else if(i > 8)
            {
                answer[i] = answer[pow(2, powCount)] + answer[plusCount];
                if(plusCount == pow(2, powCount) - 1)
                {
                    powCount++;
                    plusCount = 0;
                    i++;
                    answer[i] = 1;
                }
                plusCount++;
            }
        }
        return answer;
    }
};