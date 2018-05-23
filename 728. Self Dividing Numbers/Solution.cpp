class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        string temp = "";
        int count = 0;
        
        for(int i = left; i <= right; i++)
        {
            temp = to_string(i);
            //cout << temp << " ";
            //cout << typeid((int)temp[0]).name();
            for(int j = 0; j < temp.length(); j++)
            {
                //cout << (int)temp[j] -48 << " ";
                if((int)temp[j]-48 != 0)
                {
                    if(i % ((int)temp[j]-48) == 0)
                        count++;    
                }                    
            }
            if(count == temp.length())
                answer.push_back(i);

            count = 0;
        }
        
        return answer;
    }
};