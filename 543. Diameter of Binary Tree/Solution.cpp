/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 45.02 %
    Runtime : 10 ms
    Testcase : 106 / 106 passed
    Ranking : Your runtime beats 89.17 % of cpp submissions.
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