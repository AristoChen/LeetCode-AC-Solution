/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 50.44 %
    Runtime : 3 ms
    Testcase : 68 / 68 passed
    Ranking : Your runtime beats 97.54 % of cpp submissions.
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        calculate(root, answer);
        return answer;
    }
    
    void calculate(TreeNode* root, vector<int> &answer)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root->left, answer);
            answer.push_back(root->val);
            calculate(root->right, answer);
        }
    }
};