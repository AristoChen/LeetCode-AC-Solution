/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 47.26 %
    Runtime : 5 ms
    Testcase : 68 / 68 passed
    Ranking : Your runtime beats 5.94 % of cpp submissions.
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        calculate(root, answer);    
        return answer;
    }
    void calculate(TreeNode* root, vector<int> &answer)
    {
        if(root != NULL)
        {
            answer.push_back(root->val);
            calculate(root->left, answer);
            calculate(root->right, answer);
        }
        return;
    }
};