/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 58.13 %
    Runtime : 18 ms
    Testcase : 77 / 77 passed
    Ranking : Your runtime beats 78.35 % of cpp submissions.
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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root == NULL)
            return root;
        
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        if(calculate(root, L, R))
        {
            if(root->left == NULL && root->right == NULL)
                root = NULL;
            else if(root->left != NULL && root->right == NULL)
                root = root->left;
            else if(root->left == NULL && root->right != NULL)
                root = root->right;
            else
                root = root->left;
        }
             
        return root;
    }
    
    bool calculate(TreeNode* root, int L, int R){
        if(root == NULL)
            return false;
        if(root->val < L || root->val > R)
            return true;
        return false;
    }
};