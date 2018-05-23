class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> count;
        int last = 0;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        
        last = count.end()->first+1;
        count[last]++;
        for(int i = 0; i < last; i++)
        {
            if(count[i] != 1)
                return i;            
        }
        return 0;
    }
};