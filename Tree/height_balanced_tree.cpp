/*Given a binary tree, determine if it is height-balanced.
Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: true
    
Example 2:
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
    
Example 3:
Input: root = []
Output: true

Example 4:
root = [1,2,3,4,5,6,null,8]
Output: true
*/

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
