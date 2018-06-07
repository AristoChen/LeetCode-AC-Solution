/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 24.16 %
    Runtime : 10 ms
    Testcase : 75 / 75 passed
    Ranking : Your runtime beats 99.55 % of cpp submissions.
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
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
            return true;
        vector<int> temp;
        toVector(root, temp);
        int pos = find(temp.begin(), temp.end(), root->val) - temp.begin();
        
        return calculate(temp, pos, 0, temp.size());
    }
    
    bool calculate(vector<int>& temp, int pos, int leftBound, int rightBound)
    {
        if(leftBound == rightBound || leftBound == rightBound-1)
            return true;
        
        for(int i = leftBound; i < pos; i++)
        {
            if(temp[i] >= temp[pos])
                return false;
        }
        for(int i = pos+1; i < rightBound; i++)
        {
            if(temp[i] <= temp[pos])
                return false;
        }
        return calculate(temp, (pos+leftBound)/2, leftBound, pos) && calculate(temp, (pos+rightBound)/2, pos, rightBound);
    }
    
    void toVector(TreeNode* root, vector<int>& temp)
    {
        if(root == NULL)
            return;
        else
        {
            toVector(root->left, temp);
            temp.push_back(root->val);
            toVector(root->right, temp);
        }
    }
};