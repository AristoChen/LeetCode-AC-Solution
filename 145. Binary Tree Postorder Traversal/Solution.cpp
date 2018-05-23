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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        calculate(root, answer);
        return answer;
    }
    
    void calculate(TreeNode* root, vector<int> &answer)
    {
        if(root != NULL)
        {
            calculate(root->left, answer);
            calculate(root->right, answer);
            answer.push_back(root->val);
        }
        return;
    }
};