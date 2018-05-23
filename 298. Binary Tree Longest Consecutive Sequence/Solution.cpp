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
    int longestConsecutive(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int answer = 0;
        answer = calculate(root, answer, root->val-1);
        
        return answer;
    }
    
    int calculate(TreeNode* root, int answer, int previousVal)
    {
        if(root == NULL)
            return answer;
        else
        {
            if((root->val - previousVal) == 1)
                answer++;
            else
                answer = 1;
            return max(max(calculate(root->left, answer, root->val), calculate(root->right, answer, root->val)), answer);
        } 
    }
};