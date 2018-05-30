/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.67 %
    Runtime : 10 ms
    Testcase : 193 / 193 passed
    Ranking : Your runtime beats 26.81 % of cpp submissions.
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        int depth = findDepth(root);
        vector<int> left, right;
        
        if(depth == 1)
            return true;
        
        for(int i = 1; i <= depth-1; i++)
        {
            collectLeft(root->left, left, i);
            collectRight(root->right, right, i);
            if(left.size() != right.size())
                return false;
            else
            {
                for(int j = 0; j < left.size(); j++)
                {
                    if(left[j] != right[j])
                        return false;
                }
            }
            
            left.clear();
            right.clear();
        }
        return true;
    }
    
    int findDepth(TreeNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
    
    void collectLeft(TreeNode* root, vector<int> &left, int depth)
    {
        if(root == NULL)
        {
            if(depth == 1)
                left.push_back(INT_MIN);
            return;            
        }
        if(depth == 1)
            left.push_back(root->val);
        if(depth > 1)
        {
            collectLeft(root->left, left, depth-1);
            collectLeft(root->right, left, depth-1);
        }
    }
    
    void collectRight(TreeNode* root, vector<int> &right, int depth)
    {
        if(root == NULL)
        {
            if(depth == 1)
                right.push_back(INT_MIN);
            return;            
        }
        if(depth == 1)
            right.push_back(root->val);
        if(depth > 1)
        {
            collectRight(root->right, right, depth-1);
            collectRight(root->left, right, depth-1);
        }
    }
};