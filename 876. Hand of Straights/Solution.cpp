/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 41.27 %
    Runtime : 77 ms
    Testcase : 65 / 65 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.size() % W != 0)
            return false;
        if(W == 1)
            return true;
        
        map<int,int> count;
        for(int i : hand)
            count[i]++;
        
        for(int i = 0; i < hand.size()/W; i++)
        {
            int times = 1;
            int previous = count.begin()->first;
            count.begin()->second--;
            if(count.begin()->second == 0)
                count.erase(count.begin()->first);
            for(map<int,int>::iterator j = count.begin(); j != count.end(); j++)
            {
                if(previous == j->first)
                    continue;
                if(j->first-1 == previous)
                {
                    times++;
                    j->second--;
                    previous = j->first;
                    if(j->second == 0)
                        count.erase(j->first);
                    if(times == W)
                        break;
                }
            }
            if(times != W)
                return false;
        }
        return true;
    }
};