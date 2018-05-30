/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.25 %
    Runtime : 26 ms
    Testcase : 176 / 176 passed
    Ranking : Your runtime beats 92.35 % of cpp submissions.
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL)
            return false;
        if(compare(s, t))
            return true;
        if(isSubtree(s->left, t) || isSubtree(s->right, t))
            return true;
        return false;
    }
    
    bool compare(TreeNode* s, TreeNode* t)
    {
        if(s == NULL && t == NULL)
            return true;
        if(s == NULL || t == NULL)
            return false;
        else
            return (s->val == t->val && compare(s->left, t->left) && compare(s->right, t->right));     
    }
};