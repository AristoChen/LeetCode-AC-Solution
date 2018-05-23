class Solution {
public:
    int findComplement(int num) {
        vector<int> temp;
        int answer = 0;
        
        while(num != 0)
        {
            temp.push_back(num % 2);
            num = num / 2;
        }
        
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] == 0)
                temp[i] = 1;
            else if(temp[i] == 1)
                temp[i] = 0;
            
            if(temp[i] == 1)
                answer = answer + pow(2, i);
        }
        return answer;
    }
};