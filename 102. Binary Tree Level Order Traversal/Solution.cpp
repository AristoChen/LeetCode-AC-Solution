/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 43.12 %
    Runtime : 7 ms
    Testcase : 34 / 34 passed
    Ranking : Your runtime beats 27.17 % of cpp submissions.
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        int depth = findDepth(root);
        vector<vector<int>> answer(depth);
        
        for(int i = 1; i <= depth; i++)
            calculate(root, answer[i-1], i);
        
        return answer;
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
    
    void calculate(TreeNode* root, vector<int> &answer, int depth)
    {
        if(root == NULL)
            return;
        if(depth == 1)
            answer.push_back(root->val);
            
        if(depth > 1)
        {
            calculate(root->left, answer,depth-1);
            calculate(root->right, answer, depth-1);
        }
        return;
    }
};