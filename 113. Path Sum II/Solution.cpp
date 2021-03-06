/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 36.12 %
    Runtime : 12 ms
    Testcase : 114 / 114 passed
    Ranking : Your runtime beats 84.41 % of cpp submissions.
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> answer;
        vector<int> combination;
        
        calculate(root, answer, combination, 0, sum);
        
        return answer;
    }
    
    void calculate(TreeNode* root, vector<vector<int>>& answer, vector<int>& combination, int currentSum, int sum)
    {
        if(root == NULL)
            return;
        else
        {
            combination.push_back(root->val);
            currentSum += root->val;
            if(root->left == NULL && root->right == NULL && currentSum == sum)
                answer.push_back(combination);
            calculate(root->left, answer, combination, currentSum, sum);
            calculate(root->right, answer, combination, currentSum, sum);
            combination.pop_back();   
        }
    }
};