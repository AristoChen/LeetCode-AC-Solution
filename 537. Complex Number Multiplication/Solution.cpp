/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 63.87 %
    Runtime : 3 ms
    Testcase : 55 / 55 passed
    Ranking : Your runtime beats 98.49 % of cpp submissions.
}
*/

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string answer = "";
        int signedNum = 1;
        int realA = 0, imaginaryA = 0, realB = 0, imaginaryB = 0;
        int realAnswer = 0, imaginaryAnswer = 0;
        
        /*if((a[2] == '-' && b[2] == '+') || (a[2] == '+' && b[2] == '-'))
            signedNum = -1;
        */
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] == '+')
            {
                realA = stoi(a.substr(0, i));
                imaginaryA = stoi(a.substr(i+1, a.length()-i));
                //cout << a.substr(0, i) << " " << a.substr(i+1, a.length()-i);
            }
        }
        //cout << realA << " " << imaginaryA;
        
        for(int i = 0; i < b.length(); i++)
        {
            if(b[i] == '+')
            {
                realB = stoi(b.substr(0, i));
                imaginaryB = stoi(b.substr(i+1, b.length()-i));
            }
        }
        
        realAnswer = (realA * realB) - (imaginaryA * imaginaryB);
        imaginaryAnswer = (realA * imaginaryB) + (realB * imaginaryA);
        
        answer = answer + to_string(realAnswer) + "+" + to_string(imaginaryAnswer) + "i";
        
        return answer;
    }
};