/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 33.68 %
    Runtime : 10 ms
    Testcase : 41 / 41 passed
    Ranking : Your runtime beats 33.28 % of cpp submissions.
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
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else
        {
            if(root->left == NULL && root->right == NULL)
                return 1;
            else if(root->left != NULL && root->right == NULL)
                return minDepth(root->left) + 1;
            else if(root->left == NULL && root->right != NULL)
                return minDepth(root->right) + 1;
            else if(root->left != NULL && root->right != NULL)
                return min(minDepth(root->left)+1, minDepth(root->right)+1);
        }
    }
};