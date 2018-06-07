/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.71 %
    Runtime : 19 ms
    Testcase : 186 / 186 passed
    Ranking : Your runtime beats 88.61 % of cpp submissions.
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
    int getMinimumDifference(TreeNode* root) {
        vector<int> nums;
        int answer = INT_MAX;
        
        calculate(root, nums);
        for(int i = 0; i < nums.size()-1; i++)
            answer = min(answer, abs(nums[i+1]-nums[i]));
        
        return answer;
    }
    
    void calculate(TreeNode* root, vector<int>& nums)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root->left, nums);
            nums.push_back(root->val);
            calculate(root->right, nums);
        }
    }
};