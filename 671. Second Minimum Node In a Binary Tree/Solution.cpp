/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 41.95 %
    Runtime : 3 ms
    Testcase : 34 / 34 passed
    Ranking : Your runtime beats 97.05 % of cpp submissions.
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
    int findSecondMinimumValue(TreeNode* root) {
        map<int,int> count;    
        calculate(root, count);
        
        if(count.size() < 2)
            return -1;
        else
        {
            map<int,int>::iterator i = count.begin();
            for(i; i != count.end(); i++)
            {
                if(i->first != count.begin()->first)
                    return i->first;            
            }
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