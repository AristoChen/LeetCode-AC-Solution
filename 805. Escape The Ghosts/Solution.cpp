/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 50.42 %
    Runtime : 8 ms
    Testcase : 74 / 74 passed
    Ranking : Your runtime beats 12.21 % of cpp submissions.
}
*/

class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int distance = abs(target[0]) + abs(target[1]);
        for(int i = 0; i < ghosts.size(); i++)
        {
            if(abs(ghosts[i][0]-target[0]) + abs(ghosts[i][1]-target[1]) <= distance)
                return false;
        }
        return true;
    }
};