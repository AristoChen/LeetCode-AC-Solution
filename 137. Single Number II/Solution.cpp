class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> temp;
        
        for(int i = 0; i < nums.size(); i++)
            temp[nums[i]]++;
        for(map<int, int>::iterator i = temp.begin(); i != temp.end(); i++)
        {
            if(i->second == 1)
                return (i->first);
        }
    }
};