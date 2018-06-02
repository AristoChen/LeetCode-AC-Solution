/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 45.1316445622 %
    Runtime : 15 ms
    Testcase : 32 / 32 passed
    Ranking : Your runtime beats 95.65 % of cpp submissions.
}
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        vector<int> count(nums.size(), 0);
        TreeNode* root = calculate(nums, count, 0, nums.size());
        return root;
    }
    
    TreeNode* calculate(vector<int>& nums, vector<int>& count, int leftBound, int rightBound)
    {
        int middle = (leftBound+rightBound)/2;
        
        if(leftBound == rightBound || count[middle] == INT_MAX)
            return NULL;
        
        TreeNode* root = new TreeNode(nums[middle]);
        count[middle] = INT_MAX;
        
        if(leftBound != middle)
            root->left = calculate(nums, count, leftBound, middle);
        if(rightBound != middle)
            root->right = calculate(nums, count, middle, rightBound);    
        return root;
    }
};