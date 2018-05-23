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
    vector<double> averageOfLevels(TreeNode* root) {
        int depth = 0;
        depth = findDepth(root, depth);                
        
        vector<double> answer(depth, 0);
        vector<double> nodes(depth, 0);
        
        for(int i = 1; i <= depth; i++)
            answer[i - 1] = calculateSum(root, i) / calculateNodes(root, i);
        
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
    
    double calculateSum(TreeNode* root, int depth)
    {
        if(root == NULL)
            return 0;
        if(depth == 1)
            return root->val;
        else if(depth > 1)
            return calculateSum(root->left, depth - 1) + calculateSum(root->right, depth - 1);
        
    }
    
    double calculateNodes(TreeNode* root, int depth)
    {
        if(root == NULL)
            return 0;
        if(depth == 1)
            return 1;
        else if(depth > 1)
            return calculateNodes(root->left, depth - 1) + calculateNodes(root->right, depth - 1);
    }
};