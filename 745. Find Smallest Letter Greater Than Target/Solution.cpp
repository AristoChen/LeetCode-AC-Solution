/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 43.57 %
    Runtime : 19 ms
    Testcase : 165 / 165 passed
    Ranking : Your runtime beats 34.52 % of cpp submissions.
}
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char answer;
        
        sort(letters.begin(), letters.end());
        answer = letters[0];
        
        for(int i = 0; i < letters.size(); i++)
        {
            if(letters[i] > target)
                return letters[i];
        }
        
        return answer;
    }
};