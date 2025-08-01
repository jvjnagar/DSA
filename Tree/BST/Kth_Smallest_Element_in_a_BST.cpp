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
    int count=0;
    int data=-1;

    int kthSmallest_heap(TreeNode* root, int k) {
        //heap
        priority_queue<int> heapq;
        queue<TreeNode*> q;
        TreeNode* p;
        q.push(root);
        while(!q.empty())
        {
            p = q.front();
            q.pop();
            if (p->left != nullptr)
                q.push(p->left);
            if (p->right != nullptr)
                q.push(p->right);
            heapq.push(p->val);
            if (heapq.size()>k)
                heapq.pop();
        }
        int val = heapq.top();
        return val;
    }
    void inorder(TreeNode* root, int k) {
        if (root == nullptr) return;  // ✅ correct base case

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
