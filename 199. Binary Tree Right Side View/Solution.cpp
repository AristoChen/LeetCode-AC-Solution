/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 42.88 %
    Runtime : 4 ms
    Testcase : 211 / 211 passed
    Ranking : Your runtime beats 100.00 % of cpp submissions.
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
    vector<int> rightSideView(TreeNode* root) {
        int depth = maxDepth(root);
        vector<int> answer(depth), level;
        for(int i = 1; i <= depth; i++)
        {
            calculate(root, level, i);
            answer[i-1] = level[0];
            level = {};
        }
        return answer;
    }
    
    void calculate(TreeNode* root, vector<int>& level, int depth)
    {
        if(root == NULL)
            return;
        else if(depth == 1)
        {
            level.push_back(root->val);
            return;
        }
        else
        {
            calculate(root->right, level, depth-1);
            calculate(root->left, level, depth-1);
        }
    }
    
    int maxDepth(TreeNode* root)
    {
        return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};