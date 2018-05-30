/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 69.87 %
    Runtime : 4 ms
    Testcase : 28 / 28 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
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
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        else
        {
            root->left = pruneTree(root->left);
            root->right = pruneTree(root->right);
            if(root->val == 0 && root->left == NULL && root->right == NULL)
                return NULL;
        }
        return root;
    }
};