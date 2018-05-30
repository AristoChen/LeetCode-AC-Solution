/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 58.13 %
    Runtime : 330 ms
    Testcase : 205 / 205 passed
    Ranking : Your runtime beats 32.10 % of cpp submissions.
}
*/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        map<int,int> count;
        for(int i:candies)
            count[i]++;
        if(count.size() > candies.size()/2)
            return candies.size()/2;
        return count.size();
    }
};