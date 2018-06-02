/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 34.8208619397 %
    Runtime : 32 ms
    Testcase : 203 / 203 passed
    Ranking : Your runtime beats 22.34 % of cpp submissions.
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0 || inorder.size() == 0)
            return NULL;
        
        TreeNode* root = new TreeNode(preorder.front());
        preorder.erase(preorder.begin());
        
        int inorderPos = find(inorder.begin(), inorder.end(), root->val) - inorder.begin();
        vector<int> leftInorder(inorder.begin(), inorder.begin()+inorderPos);
        vector<int> rightInorder(inorder.begin()+inorderPos+1, inorder.end());
        
        root->left = buildTree(preorder, leftInorder);
        root->right = buildTree(preorder, rightInorder);
        
        return root;
    }
};