/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 55.68 %
    Runtime : 3 ms
    Testcase : 41 / 41 passed
    Ranking : Your runtime beats 96.79 % of cpp submissions.
}
*/

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.length(), b.length());
    }
};