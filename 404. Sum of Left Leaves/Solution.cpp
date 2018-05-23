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
    int sumOfLeftLeaves(TreeNode* root) {
        int answer = 0;
        calculate(root, answer);
        return answer;
    }
    
    void calculate(TreeNode* root, int& answer)
    {
        if(root == NULL)
            return;
        else
        {
            if(root->left != NULL)
            {
                if(root->left->left == NULL && root->left->right == NULL)
                    answer += root->left->val;
            }
            calculate(root->left, answer);
            calculate(root->right, answer);
        }
    }
};