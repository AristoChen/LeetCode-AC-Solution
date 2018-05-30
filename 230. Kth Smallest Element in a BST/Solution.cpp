/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 45.69 %
    Runtime : 23 ms
    Testcase : 91 / 91 passed
    Ranking : Your runtime beats 10.04 % of cpp submissions.
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
    int kthSmallest(TreeNode* root, int k) {
        map<int,int> count;    
        calculate(root, count);
        
        map<int,int>::iterator i = count.begin();
        for(i; i != count.end(); i++)
        {
            k--;
            if(k == 0)
                return i->first;            
        } 
    }
    
    void calculate(TreeNode* root, map<int,int>& count)
    {
        if(root == NULL)
            return;
        else
        {
            count[root->val]++;
            calculate(root->left, count);
            calculate(root->right, count);
        }
    }
};