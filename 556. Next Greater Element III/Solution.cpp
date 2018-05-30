/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 28.94 %
    Runtime : 4 ms
    Testcase : 35 / 35 passed
    Ranking : Your runtime beats 22.39 % of cpp submissions.
}
*/

class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> num;
        int answer = 0, temp = n;
        while(temp != 0)
        {
            num.insert(num.begin(), temp%10);
            temp /= 10;
        }
        
        next_permutation(num.begin(), num.end());
        for(int i : num)
            answer = answer*10 +i;
        
        if(answer > n)
            return answer;
        else
            return -1;
    }
};