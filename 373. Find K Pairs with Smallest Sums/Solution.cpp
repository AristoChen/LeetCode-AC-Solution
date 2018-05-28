class Solution {
public:
    vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        if(nums1.size() == 0 || nums2.size() == 0 || k <= 0)
            return {};
        vector<pair<int,int>> combination;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
                combination.push_back(make_pair(nums1[i], nums2[j]));
        }
        
        sort(combination.begin(), combination.end(), [](pair<int,int> a, pair<int,int> b) {return a.first+a.second < b.first+b.second;});
        return vector<pair<int,int>>(combination.begin(), combination.begin()+ min(k, int(nums1.size()*nums2.size())));
    }
};