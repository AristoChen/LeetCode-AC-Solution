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
    int findBottomLeftValue(TreeNode* root) {
        int depth = findDepth(root);
        vector<int> answer;
        
        calculate(root, answer, depth);
        
        return answer[0];
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
    
    void calculate(TreeNode* root, vector<int> &answer, int depth)
    {
        if(root == NULL)
            return;
        if(depth == 1)
            answer.push_back(root->val);
        if(depth > 1)
        {
            calculate(root->left, answer, depth - 1);
            calculate(root->right, answer, depth - 1);
        }
    }
};