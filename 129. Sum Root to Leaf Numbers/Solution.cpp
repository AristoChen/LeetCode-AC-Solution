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
    int sumNumbers(TreeNode* root) {
        vector<int> sum;
        int answer = 0;
        calculate(root, sum, 0);
        
        for(int i = 0; i < sum.size(); i++)
            answer += sum[i];
        
        return answer;
    }
    void calculate(TreeNode* root, vector<int>& sum, int currentSum)
    {
        if(root == NULL)
            return;
        else
        {
            currentSum = (currentSum*10) + root->val;
            if(root->left == NULL && root->right == NULL)
                sum.push_back(currentSum);
            calculate(root->left, sum, currentSum);
            calculate(root->right, sum, currentSum);
        }
    }
};