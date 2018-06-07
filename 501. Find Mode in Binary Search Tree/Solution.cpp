/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 37.68 %
    Runtime : 23 ms
    Testcase : 25 / 25 passed
    Ranking : Your runtime beats 17.00 % of cpp submissions.
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
    vector<int> findMode(TreeNode* root) {
        map<int,int> count;
        vector<int> answer;
        int max = 0;
        
        countNum(root, count);
        for(map<int,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second > max)
            {
                answer = {i->first};
                max = i->second;
            }
            else if(i->second == max)
                answer.push_back(i->first);
        }
        return answer;
    }
    
    void countNum(TreeNode* root, map<int,int>& count)
    {
        if(root == NULL)
            return;
        else
        {
            countNum(root->left, count);
            count[root->val]++;
            countNum(root->right, count);
        }
    }
};