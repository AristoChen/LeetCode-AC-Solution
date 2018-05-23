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
    vector<int> largestValues(TreeNode* root) {
        int depth = 0;
        depth = findDepth(root, depth);
        vector<int> answer(depth, INT_MIN);
        for(int i = 1; i <= depth; i++)
            answer[i-1] = calculate(root, i);
            
        return answer;    
    }
    
    int findDepth(TreeNode* root, int depth)
    {
        if(root == NULL)
            return depth;
        else 
            depth++;
        return max(findDepth(root->left, depth), findDepth(root->right, depth));
    }
    
    int calculate(TreeNode* root, int depth)
    {
        if(root == NULL)
            return INT_MIN;
        if(depth == 1)
            return root->val;
        if(depth > 1)
            return max(calculate(root->left, depth-1), calculate(root->right, depth-1));
    }
};