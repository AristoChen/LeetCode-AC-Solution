/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 67.62 %
    Runtime : 47 ms
    Testcase : 183 / 183 passed
    Ranking : Your runtime beats 52.66 % of cpp submissions.
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* answer = new TreeNode(0);
        
        if(t1 != NULL && t2 != NULL)
            answer = calculate(answer, t1, t2);
        else if(t1 != NULL && t2 == NULL)
            answer = t1;
        else if(t1 == NULL && t2 != NULL)
            answer = t2;
        else if(t1 == NULL && t2 == NULL)
            return t1;
        
        return answer;
    }
    
    TreeNode* calculate(TreeNode* answer, TreeNode* t1, TreeNode* t2)
    {
        TreeNode* Zero = new TreeNode(0);
        if(t1 == NULL && t2 == NULL )
            return answer;
        
        if(t1 != NULL && t2 != NULL)
            answer->val = t1->val + t2->val;
        else if(t1 == NULL && t2 != NULL)
            answer->val = t2->val;
        else if(t1 != NULL && t2 == NULL)
            answer->val = t1->val;
            
        if(t1->left != NULL || t2->left != NULL)
            answer->left = new TreeNode(0);
        if(t1->right != NULL || t2->right != NULL)
            answer->right = new TreeNode(0);
        
        
        if(t1->left != NULL && t2->left == NULL)
            answer->left = calculate(answer->left, t1->left, Zero);
        else if(t1->left == NULL && t2->left != NULL)
            answer->left = calculate(answer->left, Zero, t2->left);
        else if(t1->left != NULL && t2->left != NULL)
            answer->left = calculate(answer->left, t1->left, t2->left);
        
        if(t1->right != NULL && t2->right == NULL)
            answer->right = calculate(answer->right, t1->right, Zero);
        else if(t1->right == NULL && t2->right != NULL)
            answer->right = calculate(answer->right, Zero, t2->right);
        else if(t1->right != NULL && t2->right != NULL)
            answer->right = calculate(answer->right, t1->right, t2->right);
        
        return answer;
    }
};