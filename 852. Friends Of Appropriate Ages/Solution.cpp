class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int answer = 0, previousResult = 0, tempSum = 0;
        sort(ages.begin(), ages.end());
        for(int i = 0; i < ages.size(); i++)
        {
            for(int j = i-1; j >= 0; j--)
            {
                if(ages[i]*0.5+7 >= ages[j])
                {
                    ages.erase(ages.begin()+j);
                    i--;
                    j--;
                }
                else if(ages[i] == ages[j])
                {
                    tempSum = previousResult + 2;
                    break;
                }
                else
                    tempSum++;
            }
            previousResult = tempSum;
            answer += tempSum;
            tempSum = 0;
        }
        return answer;
    }
};