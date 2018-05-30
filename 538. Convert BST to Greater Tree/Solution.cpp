/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 48.53 %
    Runtime : 40 ms
    Testcase : 212 / 212 passed
    Ranking : Your runtime beats 73.55 % of cpp submissions.
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