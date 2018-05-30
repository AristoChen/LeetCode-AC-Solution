/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.10 %
    Runtime : 3 ms
    Testcase : 50 / 50 passed
    Ranking : Your runtime beats 98.48 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> constructRectangle(int area) {
        for(int i = sqrt(area); i > 0; i--)
        {
            if(area % i == 0)
                return {area/i, i};
        }
    }
};