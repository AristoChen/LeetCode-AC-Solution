class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> count;
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        
        for(map<int,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second == 2)
                answer.push_back(i->first);
        }
        
        return answer;
    }
};