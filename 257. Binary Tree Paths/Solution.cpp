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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        vector<int> path;
        calculate(root, answer, path);
        return answer;
    }
    
    void calculate(TreeNode* root, vector<string>& answer, vector<int>& path)
    {
        if(root == NULL)
            return;
        else 
        {
            path.push_back(root->val);
            if(root->left == NULL && root->right == NULL)
            {
                string temp = "";
                for(int i = 0; i < path.size(); i++)
                    temp += to_string(path[i]) + "->";
                temp = temp.substr(0, temp.length()-2);
                answer.push_back(temp);
            }
            calculate(root->left, answer, path);
            calculate(root->right, answer, path);
            path.pop_back();
        }
    }
};