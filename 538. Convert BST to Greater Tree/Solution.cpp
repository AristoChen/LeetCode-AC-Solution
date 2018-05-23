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
    int temp = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(root == NULL)
            return NULL;
        else
        {
            root->right = convertBST(root->right);
            root->val += temp;
            temp = root->val;
            root->left = convertBST(root->left);
        }
        return root;

    }
};