/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 47.38 %
    Runtime : 244 ms
    Testcase : 10 / 10 passed
    Ranking : Your runtime beats 57.55 % of cpp submissions.
}
*/

class Solution {
public:
    vector<int> originNums;
    Solution(vector<int> nums) {
        originNums = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return originNums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> temp = originNums;
        random_shuffle(temp.begin(), temp.end());
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */