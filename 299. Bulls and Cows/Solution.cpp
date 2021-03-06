/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 36.16 %
    Runtime : 9 ms
    Testcase : 151 / 151 passed
    Ranking : Your runtime beats 43.54 % of cpp submissions.
}
*/

class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0, B = 0;
        for(int i = 0; i < secret.length(); i++)
        {
            if(secret[i] == guess[i])
            {
                A++;
                secret.erase(i, 1);
                guess.erase(i, 1);
                i--;
            }
        }
        
        for(int i = 0; i < guess.length(); i++)
        {
            int pos = secret.find(guess[i]);
            if(pos >= 0)
            {
                B++;
                secret.replace(pos, 1, ".");
            }
        }
        return to_string(A) + "A" + to_string(B) + "B";
    }
};