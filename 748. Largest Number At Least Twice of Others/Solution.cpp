class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map<int,int> index;
        int lastNum = 0;
        
        for(int i = 0; i < nums.size(); i++)
            index[nums[i]] = i;
        
        lastNum = index.rbegin()->first;
        
        for(map<int,int>::reverse_iterator i = index.rbegin(); i != index.rend(); i++)
        {
            if(lastNum == i->first)
                continue;
            else if(lastNum >= 2*i->first)
                return index[lastNum];
            else if(lastNum < 2*i->first)
                return -1;
        }
        return 0;
    }
};