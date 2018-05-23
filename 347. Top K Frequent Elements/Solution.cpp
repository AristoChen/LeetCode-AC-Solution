class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> temp;
        vector<int> answer(k);
        int currentMax = 0, key;
        for(int i = 0; i < nums.size(); i++)
            temp[nums[i]]++;        
            
        for(int i = 0; i < k; i++)
        {
            for(map<int, int>::iterator j = temp.begin(); j != temp.end(); j++)
            {
                if(j->second > currentMax)
                {
                    currentMax = j->second;
                    key = j->first;                    
                }
            }
            answer[i] = key;
            temp.erase(key);
            currentMax = 0;
        }
        
        return answer;
    }
};