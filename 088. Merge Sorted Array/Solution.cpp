/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 32.41 %
    Runtime : 6 ms
    Testcase : 59 / 59 passed
    Ranking : Your runtime beats 99.93 % of cpp submissions.
}
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(m < nums1.size())
            nums1.pop_back();
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};