/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 30.29 %
    Runtime : 55 ms
    Testcase : 31 / 31 passed
    Ranking : Your runtime beats 3.06 % of cpp submissions.
}
*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        gas.insert(gas.end(), gas.begin(), gas.end());
        cost.insert(cost.end(), cost.begin(), cost.end());
        
        for(int i = 0; i < gas.size()/2; i++)
        {
            if(gas[i] >= cost[i])
            {
                int gasSum = gas[i], costSum = cost[i], station = 1;
                for(int j = i+1; j < i+gas.size()/2; j++)
                {
                    gasSum += gas[j];
                    costSum += cost[j];
                    if(gasSum < costSum)
                        break;
                    station++;
                }
                if(station >= gas.size()/2)
                    return i;
            }
        }
        
        return -1;
    }
};