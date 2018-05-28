/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<int> flattern;
    BSTIterator(TreeNode *root) {
        calculate(root);
    }

    void calculate(TreeNode *root)
    {
        if(root == NULL)
            return;
        else
        {
            calculate(root->right);
            flattern.push(root->val);
            calculate(root->left);
        }
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !flattern.empty();
    }

    /** @return the next smallest number */
    int next() {
        int answer = flattern.top();
        flattern.pop();
        return answer;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */