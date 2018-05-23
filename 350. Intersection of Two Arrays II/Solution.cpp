class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> count1;
        map<int, int> count2;
        vector<int> answer;
        
        for(int i = 0; i < nums1.size(); i++)
            count1[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
            count2[nums2[i]]++;
        
        for(map<int,int>::iterator i = count1.begin(); i != count1.end(); i++)
        {
            if(count2[i->first])
            {
                int minium = min(count2[i->first], i->second);
                for(int j = 0; j < minium; j++)
                    answer.push_back(i->first);
            }
        }
        
        return answer;
    }
};