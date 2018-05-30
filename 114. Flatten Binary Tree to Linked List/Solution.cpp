/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 37.04 %
    Runtime : 12 ms
    Testcase : 225 / 225 passed
    Ranking : Your runtime beats 81.69 % of cpp submissions.
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
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            return;
        
        TreeNode* temp = root;
        stack<TreeNode*> stack;
        traversal(root, stack);
        while(!stack.empty())
        {
            temp->right = stack.top();
            stack.pop();
            temp->left = NULL;
            temp = temp->right;
        }
    }
    
    void traversal(TreeNode* root, stack<TreeNode*>& stack)
    {
        if(root == NULL)
            return;
        else
        { 
            traversal(root->right, stack);
            traversal(root->left, stack);
            stack.push(root);
        }
        return;
    }
};