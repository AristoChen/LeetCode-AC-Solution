/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 30.11 %
    Runtime : 20 ms
    Testcase : 123 / 123 passed
    Ranking : Your runtime beats 69.57 % of cpp submissions.
}
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 0)
            return false;
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        
        for(int i = 1; i < flowerbed.size()-1; i++)
        {
            if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0)
            {
                flowerbed[i] = 1;
                n--;
            }
            if(n <= 0)
                return true;
        }
        return false;
    }
};