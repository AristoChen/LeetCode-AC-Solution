/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 50.11 %
    Runtime : 39 ms
    Testcase : 421 / 421 passed
    Ranking : Your runtime beats 70.02 % of cpp submissions.
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
    bool findTarget(TreeNode* root, int k) {
        vector<int> temp;
        
        calculate(root, temp);
        while(temp.size() != 0)
        {
            int num = temp[0];
            temp.erase(temp.begin());
            if(find(temp.begin(), temp.end(), k-num) != temp.end())
                return true;
        }
        return false;
    }
    
    void calculate(TreeNode* root, vector<int>& temp)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root->left, temp);
            temp.push_back(root->val);
            calculate(root->right, temp);
        }
    }
};