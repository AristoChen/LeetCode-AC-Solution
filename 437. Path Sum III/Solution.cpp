/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.17 %
    Runtime : 22 ms
    Testcase : 126 / 126 passed
    Ranking : Your runtime beats 69.61 % of cpp submissions.
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
    int pathSum(TreeNode* root, int sum) {
        int answer = 0;
        findAnswer(root, answer, sum);
        return answer;
    }
    
    void calculate(TreeNode* root, int& answer, int currentSum, int sum)
    {
        if(root == NULL)
            return;
        else
        {
            currentSum += root->val;
            if(currentSum == sum)
                answer++;  
            
            calculate(root->left, answer, currentSum, sum);
            calculate(root->right, answer, currentSum, sum);
        }
    }
    
    void findAnswer(TreeNode* root, int& answer, int sum)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root, answer, 0, sum);
            findAnswer(root->left, answer, sum);
            findAnswer(root->right, answer, sum);
        }
    }
};