#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Solution class
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) 
            return new TreeNode(val);  // base case: insert new node here

        if (val < root->val) 
            root->left = insertIntoBST(root->left, val);
        else 
            root->right = insertIntoBST(root->right, val);

        return root;
    }
};

// Helper function to print the BST in-order (sorted order)
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    Solution sol;
    TreeNode* root = nullptr;

    // Example input values
    int values[] = {5, 8, 3, 7, 9, 1};

    // Insert values one by one
    for (int val : values) {
        root = sol.insertIntoBST(root, val);
    }

    // Print in-order traversal (should be sorted)
    cout << "In-order Traversal of BST: ";
    inorder(root);
    cout << endl;

    return 0;
}
