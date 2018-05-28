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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        if(root == NULL)
            return root;
        vector<TreeNode*> flattern;
        int pos = 0;
        
        calculate(root, p, flattern);
        pos = find_if(flattern.begin(), flattern.end(), [p](TreeNode* a){return a->val == p->val;}) - flattern.begin();
        
        if(pos == flattern.size()-1)
            return NULL;
        
        return flattern[pos+1];
    }
    
    void calculate(TreeNode* root, TreeNode* p, vector<TreeNode*> &flattern)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root->left, p, flattern);
            flattern.push_back(root);
            calculate(root->right, p, flattern);
        }
    }
};