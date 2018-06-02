/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 34.2077468051 %
    Runtime : 28 ms
    Testcase : 203 / 203 passed
    Ranking : Your runtime beats 26.76 % of cpp submissions.
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0)
            return NULL;
        
        TreeNode* root = new TreeNode(postorder.back());
        postorder.pop_back();
        
        int inorderPos = find(inorder.begin(), inorder.end(), root->val) - inorder.begin();
        vector<int> leftInorder(inorder.begin(), inorder.begin()+inorderPos);
        vector<int> rightInorder(inorder.begin()+inorderPos+1, inorder.end());
        
        root->right = buildTree(rightInorder, postorder);
        root->left = buildTree(leftInorder, postorder);
        
        return root;
    }
};