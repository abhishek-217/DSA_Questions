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
    pair<int, TreeNode*> dfs(TreeNode* root, int d)
    {
        if(root==NULL)
            return {-1, NULL};

        if(root->left==NULL && root->right==NULL)
            return {d, root};

        pair<int, TreeNode*> l=dfs(root->left, d+1);
        pair<int, TreeNode*> r=dfs(root->right, d+1);

        if(l.first==r.first)
            return {l.first, root};
        
        return (l.first>r.first)?l:r;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return dfs(root, 0).second;
    }
};