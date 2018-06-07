/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.05 %
    Runtime : 27 ms
    Testcase : 75 / 75 passed
    Ranking : Your runtime beats 10.67 % of cpp submissions.
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
    int answer = 0;
    int findTilt(TreeNode* root) {
        if(root == NULL)
            return 0;
        else
        {
            int leftTilt = findTilt(root->left);
            
            int leftSum = 0, rightSum = 0;
            calculate(root->left, leftSum);
            calculate(root->right, rightSum);
            answer += abs(leftSum-rightSum);
            
            int rightTilt = findTilt(root->right);
        }
        
        return answer;
    }
    
    void calculate(TreeNode* root, int& sum)
    {
        if(root != NULL)
        {
            calculate(root->left, sum);
            sum += root->val;
            calculate(root->right, sum);
        }
    }
};