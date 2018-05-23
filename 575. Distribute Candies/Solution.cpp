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