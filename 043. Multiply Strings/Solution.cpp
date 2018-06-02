/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 28.1522277821 %
    Runtime : 16 ms
    Testcase : 311 / 311 passed
    Ranking : Your runtime beats 30.07 % of cpp submissions.
}
*/

class Solution {
public:
    string multiply(string num1, string num2) {
        if((num1.size() == 1 && num1.back() == '0') || (num2.size() == 1 && num2.back() == '0'))
            return "0";
        vector<int> result;
        int tempInt = 0, carry = 0;       
        string answer = "";
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        for(int i = 0; i < num1.length(); i++)
        {
            for(int j = 0; j < num2.length(); j++)
            {
                tempInt = int(num1[i]-'0')*int(num2[j]-'0');
                if(result.size() == 0 || result.size()-1 < i+j)
                    result.push_back(tempInt);
                else
                    result[i+j] += tempInt;
            }
        }
        
        for(int i = 0; i < result.size(); i++)
        {
            if(answer.length() == 0 || answer.length() < i+1)
                answer = to_string(result[i]) + answer;
            else
            {
                tempInt = result[i] + stoi(answer.substr(0, answer.length()-i));
                answer.replace(0, answer.length()-i, to_string(tempInt));
            }
        }
        
        return answer;
    }
};