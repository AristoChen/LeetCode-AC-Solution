/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 53.78 %
    Runtime : 3 ms
    Testcase : 68 / 68 passed
    Ranking : Your runtime beats 98.09 % of cpp submissions.
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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return root;
        else
        {
            TreeNode* temp = NULL;
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);        
        
        return root;
    }
};