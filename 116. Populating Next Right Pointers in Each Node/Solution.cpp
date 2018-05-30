/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 36.77 %
    Runtime : 25 ms
    Testcase : 14 / 14 passed
    Ranking : Your runtime beats 15.33 % of cpp submissions.
}
*/

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        int depth = findDepth(root);
        vector<TreeLinkNode*> level;
        for(int i = 1; i <= depth; i++)
        {
            calculate(root, level, i);
            for(int j = 0; j < level.size()-1; j++)
                level[j]->next = level[j+1];
            level = {};
        }
    }
    
    void calculate(TreeLinkNode* root, vector<TreeLinkNode*>& level, int depth)
    {
        if(root == NULL)
            return;
        if(depth == 1)
            level.push_back(root);
        else
        {
            calculate(root->left, level, depth-1);
            calculate(root->right, level, depth-1);
        }
    }
    
    int findDepth(TreeLinkNode* root)
    {
        return root == NULL? 0 : max(findDepth(root->left), findDepth(root->right)) + 1;
    }
};