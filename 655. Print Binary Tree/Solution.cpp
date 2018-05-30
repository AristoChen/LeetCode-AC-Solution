/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 49.19 %
    Runtime : 5 ms
    Testcase : 73 / 73 passed
    Ranking : Your runtime beats 63.01 % of cpp submissions.
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
    vector<vector<string>> printTree(TreeNode* root) {
        int depth = findDepth(root);
        vector<vector<string>> answer(depth, vector<string>(pow(2, depth)-1));
        
        int currentPos = (pow(2, depth) - 1) / 2; 
        int steps = pow(2, depth - 2);
        
        for(int i = 1; i <= depth; i++)
            calculate(root, answer[i-1], currentPos, steps, i);
        
        return answer;
    }
    
    void calculate(TreeNode* root, vector<string> &answer, int currentPos, int steps, int depth)
    {
        if(root == NULL)
            return;
        if(depth == 1)
            answer[currentPos] = to_string(root->val);
        else if(depth > 1)
        {
            calculate(root->left, answer, currentPos - steps, steps / 2, depth - 1);
            calculate(root->right, answer, currentPos + steps, steps / 2, depth - 1);
        }
            
        return;
    }    
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
    
};