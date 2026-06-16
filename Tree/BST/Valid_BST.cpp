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
    bool BST(TreeNode* root, long long min, long long max)
    {
        if (root==nullptr)
            return true;
        TreeNode* left_node = root->left;
        TreeNode* right_node = root->right;
        if (root->val<min || root->val>max)
            return false;
        if (left_node != nullptr && root->val<=left_node->val)
            return false;
        if (right_node !=nullptr && root->val>=right_node->val)
            return false;
        
        return BST(left_node, min, (long long)root->val-1 ) && BST(right_node, (long long)root->val+1, max);
    }
    bool isValidBST(TreeNode* root) {
        return BST(root, LLONG_MIN, LLONG_MAX);
    }
};
