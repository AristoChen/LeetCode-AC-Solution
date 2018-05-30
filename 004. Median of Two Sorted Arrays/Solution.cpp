/*
Submission Detail:{
    Difficulty : Hard
    Acceptance Rate : 23.27 %
    Runtime : 82 ms
    Testcase : 2080 / 2080 passed
    Ranking : Your runtime beats 37.67 % of cpp submissions.
}
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int length = nums1.size() + nums2.size();
        double answer;
        
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        
        if(length % 2 == 0)
            answer = double(nums1[length/2] + nums1[(length/2)-1]) / double(2);
        else if(length % 2 != 0)
            answer = nums1[length/2];
        
        return answer;
    }
};