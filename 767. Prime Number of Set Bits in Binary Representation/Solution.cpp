/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 55.56 %
    Runtime : 49 ms
    Testcase : 200 / 200 passed
    Ranking : Your runtime beats 7.95 % of cpp submissions.
}
*/

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int temp, bitNum = 0, answer = 0;
        vector<int> primeNum = {2,3,5,7,11,13,17,19,23,29,31};
        
        for(int i = L; i <= R; i++)
        {
            temp = i;
            while(temp != 0)
            {
                if(temp%2 == 1)
                    bitNum++;
                temp = temp>>1;
            }
            if(find(primeNum.begin(), primeNum.end(), bitNum) != primeNum.end())
                answer++;
            bitNum = 0;
        }
        
        return answer;
    }
};