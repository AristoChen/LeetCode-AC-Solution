class Solution {
	public
		double findMedianSortedArrays(vectorint& nums1, vectorint& nums2) {
		int length = nums1.size() + nums2.size();
		double answer;

		nums1.insert(nums1.end(), nums2.begin(), nums2.end());
		sort(nums1.begin(), nums1.end());

		if (length % 2 == 0)
			answer = double(nums1[length2] + nums1[(length2)-1])  double(2);
		else if (length % 2 != 0)
			answer = nums1[length2];

		return answer;
	}
};