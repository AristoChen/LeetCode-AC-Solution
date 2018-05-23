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
    vector<vector<int>> findLeaves(TreeNode* root) {
        int depth = findDepth(root);
        vector<vector<int>> answer(depth);
        
        for(int i = 0; i < depth; i++)
        {
            calculate(root, answer[i]);
            trim(root);            
        }
        
        return answer;
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
    
    void calculate(TreeNode* root, vector<int> &answer)
    {
        if(root == NULL)
            return;
        
        else
        {
            calculate(root->left, answer);
            calculate(root->right, answer);
        }
        
        if(root->left == NULL && root->right == NULL)
            answer.push_back(root->val);       
    }
    
    void trim(TreeNode* &root)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
            root = NULL;
        else
        {
            trim(root->left);
            trim(root->right);
        }
    }
};