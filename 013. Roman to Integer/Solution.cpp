/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.46 %
    Runtime : 95 ms
    Testcase : 3999 / 3999 passed
    Ranking : Your runtime beats 79.54 % of cpp submissions.
}
*/

class Solution {
public:
    int romanToInt(string s) {
        vector<int> convert(s.length() + 1);
        int answer = 0, i;
        
        for(i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case 'I':
                    convert[i] = 1;
                    break;
                    
                case 'V':
                    convert[i] = 5;
                    break;
                
                case 'X':
                    convert[i] = 10;
                    break;
                
                case 'L':
                    convert[i] = 50;
                    break;
                
                case 'C':
                    convert[i] = 100;
                    break;
                    
                case 'D':
                    convert[i] = 500;
                    break;
                    
                case 'M':
                    convert[i] = 1000;
                    break;
            }
            //cout << convert[i] << " ";
        }
        
        for(int i = 0; i < s.length(); i ++)
        {
            if(convert[i] < convert[i+1])
            {
                answer = answer + convert[i+1] - convert[i];
                i++;
            }
            else
                answer = answer + convert[i];
        }
            
            
        return answer;
    }
};