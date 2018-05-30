/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 46.14 %
    Runtime : 19 ms
    Testcase : 109 / 109 passed
    Ranking : Your runtime beats 97.14 % of cpp submissions.
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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(root == NULL)
            return root;
        if(d == 1)
        {
            TreeNode* newRoot = new TreeNode(v);
            newRoot->left = root;
            return newRoot;
        }
        
        int depth = findDepth(root);
        if(d > depth)
            calculate(root, v, d-1, 1);
        else
            calculate(root, v, d-1, 0);
        return root;
    }
    
    void calculate(TreeNode *&root, int value, int depth, int flag)
    {
        if(root == NULL)
            return;
        if(depth == 1)
        {
            if(root->left != NULL)
            {
                TreeNode* left = new TreeNode(value);
                left->left = root->left;
                root->left = left;
            }
            if(root->right != NULL)
            {
                TreeNode* right = new TreeNode(value);
                right->right = root->right;
                root->right = right;
            }
            
            if(root->left == NULL)
            {
                TreeNode* left = new TreeNode(value);
                root->left = left;
            }
            if(root->right == NULL)
            {
                TreeNode* right = new TreeNode(value);
                root->right = right;
            }
        }
        else
        {
            calculate(root->left, value, depth-1, flag);
            calculate(root->right, value, depth-1, flag);
        }
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
};