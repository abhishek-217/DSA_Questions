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
    
    bool isCousins(TreeNode* root, int x, int y) { 
        if (!root) return false;

        queue<pair<TreeNode*, TreeNode*>> q; // Pair of node and its parent
        q.push({root, nullptr});

        while (!q.empty()) {
            int size = q.size();
            TreeNode* parentX = nullptr;
            TreeNode* parentY = nullptr;

            for (int i = 0; i < size; ++i) {
                auto nodePair = q.front();
                TreeNode* node = nodePair.first;
                TreeNode* parent = nodePair.second;
                q.pop();

                if (node->val == x) parentX = parent;
                if (node->val == y) parentY = parent;

                if (node->left) q.push({node->left, node});
                if (node->right) q.push({node->right, node});
            }

            if (parentX && parentY) return parentX != parentY;
            if (parentX || parentY) return false;
        }

        return false;
    }
};