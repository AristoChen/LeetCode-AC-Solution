/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 37.11 %
    Runtime : 54 ms
    Testcase : 275 / 275 passed
    Ranking : Your runtime beats 3.27 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        if(asteroids.size() < 2)
            return asteroids;
        
        for(int i = 0; i < asteroids.size()-1; i++)
        {
            if(asteroids.size() == 0)
                break;
            if(asteroids[i] > 0 && asteroids[i+1] < 0)
            {
                if(abs(asteroids[i]) == abs(asteroids[i+1]))
                {
                    asteroids.erase(asteroids.begin()+i, asteroids.begin()+i+2);
                    if(i-2 >= 0)
                        i = i-2;
                    else
                        i = -1;
                }
                else if(abs(asteroids[i]) > abs(asteroids[i+1]))
                {
                    asteroids.erase(asteroids.begin()+i+1);
                    i--;
                }
                else if(abs(asteroids[i]) < abs(asteroids[i+1]))
                {
                    asteroids.erase(asteroids.begin()+i);
                    if(i-2 >= 0)
                        i = i-2;
                    else
                        i = -1;
                }
            }
        }
        
        return asteroids;
    }
};