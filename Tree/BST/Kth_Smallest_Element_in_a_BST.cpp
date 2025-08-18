#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Insert into BST
TreeNode* insertBST(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) 
        root->left = insertBST(root->left, val);
    else 
        root->right = insertBST(root->right, val);
    return root;
}

class Solution {
public:
    int count = 0;
    int data = -1;

    int kthSmallest_heap(TreeNode* root, int k) {
        priority_queue<int> heapq;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* p = q.front();
            q.pop();
            if (p->left != nullptr) q.push(p->left);
            if (p->right != nullptr) q.push(p->right);

            heapq.push(p->val);
            if (heapq.size() > k) heapq.pop();
        }
        return heapq.top();
    }

    void inorder(TreeNode* root, int k) {
        if (root == nullptr) return;

        inorder(root->left, k);

        count++;
        if (count == k) {
            data = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return data;
    }
};

int main() {
    // Predefined input values
    vector<int> values = {5, 8, 3, 7, 9, 1};
    int k = 3; // Example: Find 3rd smallest element

    // Build BST
    TreeNode* root = nullptr;
    for (int v : values) {
        root = insertBST(root, v);
    }

    // Solution
    Solution sol;
    cout << "Using inorder traversal: " << sol.kthSmallest(root, k) << endl;

    Solution sol2; // fresh object because `count` is stateful
    cout << "Using heap method: " << sol2.kthSmallest_heap(root, k) << endl;

    return 0;
}
