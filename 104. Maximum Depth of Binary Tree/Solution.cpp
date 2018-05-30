/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 55.48 %
    Runtime : 7 ms
    Testcase : 39 / 39 passed
    Ranking : Your runtime beats 89.93 % of cpp submissions.
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
    int maxDepth(TreeNode* root) {
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};