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
	bool hasPathSum(TreeNode* root, int sum) {
		vector<int> sumSet;
		calculate(root, sumSet, 0);
		return (find(sumSet.begin(), sumSet.end(), sum) != sumSet.end());
	}

	void calculate(TreeNode* root, vector<int>& sumSet, int currentSum)
	{
		if (root == NULL)
			return;
		else
		{
			currentSum += root->val;
			if (root->left == NULL && root->right == NULL)
				sumSet.push_back(currentSum);
			calculate(root->left, sumSet, currentSum);
			calculate(root->right, sumSet, currentSum);
		}
	}
};