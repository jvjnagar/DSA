/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        int x, y;
        if (root == nullptr)
            return 0;
        x = height(root->left);
        if (x==-1)
            return -1;
        y = height(root->right);
        if (y==-1)
            return -1;
        if (abs(x-y)>1)
            return -1;
        return x > y ? x+1 : y+1;
    }
    bool isBalanced(TreeNode* root) {
        if (height(root)==-1)
            return false;
        else 
            return true;
    }
};
