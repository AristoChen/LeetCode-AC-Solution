/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 38.6422736202 %
    Runtime : 10 ms
    Testcase : 227 / 227 passed
    Ranking : Your runtime beats 98.28 % of cpp submissions.
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
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        else if(abs(findDepth(root->left)-findDepth(root->right)) > 1)
            return false;
        else
            return isBalanced(root->left) && isBalanced(root->right);    
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL ? 0 : max(findDepth(root->left), findDepth(root->right))+1;
    }
};