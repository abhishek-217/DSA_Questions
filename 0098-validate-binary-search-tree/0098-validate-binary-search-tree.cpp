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

    void Inorder(TreeNode* root, vector<int>&res){
        if(root == nullptr){
            return;
        }
        Inorder(root->left, res);
        res.push_back(root->val);
        Inorder(root->right, res);
    }
    bool issort(vector<int>&res, int n){
        for(int i=1; i<n; i++){
            if(res[i-1] >= res[i]){
                return false;
            }
        }

        return true;
    }

    bool isValidBST(TreeNode* root) {
        vector<int>res;
        Inorder(root,res);

        int n = res.size();

        return issort(res,n);
    }
};