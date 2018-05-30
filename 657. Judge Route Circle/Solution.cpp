/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 68.43 %
    Runtime : 22 ms
    Testcase : 62 / 62 passed
    Ranking : Your runtime beats 41.60 % of cpp submissions.
}
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int verticalStep = 0, horizontalStep = 0;
        for(int i = 0; i < moves.length(); i++)
        {
            if(moves[i] == 'U')
                verticalStep += 1;
            if(moves[i] == 'D')
                verticalStep -= 1;
            if(moves[i] == 'R')
                horizontalStep += 1;
            if(moves[i] == 'L')
                horizontalStep -= 1;
        }
        if(verticalStep == 0 & horizontalStep == 0)
            return true;
        else
            return false;
    }
};