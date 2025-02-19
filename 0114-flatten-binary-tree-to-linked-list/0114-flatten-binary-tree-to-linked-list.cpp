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

    void PreO(TreeNode* root, vector<TreeNode*>&arr){
        if(root == nullptr){
            return;
        }

        arr.push_back(root);
        PreO(root->left,arr);
        PreO(root->right,arr);
    }
    void flatten(TreeNode* root) {
        if(root == nullptr ){
            return;
        }
        vector<TreeNode*>res;
        PreO(root,res);

        for(int i=0; i<res.size()-1; i++){
            res[i]->left = nullptr;
            res[i]->right = res[i+1];
        } 
    }
};