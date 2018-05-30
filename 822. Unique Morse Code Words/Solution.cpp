/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 73.33 %
    Runtime : 8 ms
    Testcase : 83 / 83 passed
    Ranking : Your runtime beats 21.48 % of cpp submissions.
}
*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> transform;
        
        for(int i = 0; i < words.size(); i++)
        {
            string tmp = "";
            for(int j = 0; j < words[i].length(); j++)
            {
                tmp += morseCode[int(words[i][j])-97]; 
            }
            transform.insert(tmp);
        }
        
        return transform.size();
    }
};