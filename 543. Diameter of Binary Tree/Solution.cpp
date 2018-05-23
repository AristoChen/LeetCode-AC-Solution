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
    int diameterOfBinaryTree(TreeNode* root) {
        stack<TreeNode*> tmp;
        int maxSingleLength = 0;
        int answer = 0;
        tie(maxSingleLength, answer) = calculate(root);
        
        return answer;
    }
    
    tuple<int, int> calculate(TreeNode* root)
    {
        if(root == NULL)
            return make_tuple(0, 0);
        else
        {
            int maxLeftLength = 0, leftAnswer = 0; 
            int maxRightLength = 0, rightAnswer = 0;
            int currentNodeAnswer = 0;
            tie(maxLeftLength, leftAnswer) = calculate(root->left);
            tie(maxRightLength, rightAnswer) = calculate(root->right);
            currentNodeAnswer = maxLeftLength + maxRightLength;
            if(currentNodeAnswer > max(leftAnswer, rightAnswer)) 
                return make_tuple(max(maxLeftLength, maxRightLength)+1, currentNodeAnswer);
            else
                return make_tuple(max(maxLeftLength, maxRightLength)+1, max(leftAnswer, rightAnswer));
        }
    }
};