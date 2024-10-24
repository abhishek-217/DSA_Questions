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

    TreeNode* Compare1(TreeNode* root){
        if(root == nullptr){
            return nullptr;
        }
        Compare1(root->left);
        // Compare(root->right);

        return root;
    }
    TreeNode* Compare2(TreeNode* root){
        if(root == nullptr){
            return nullptr;
        }
        Compare2(root->right);
        // Compare(root->right);

        return root;
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {

        if(root1 == nullptr && root2 == nullptr){
            return true;
        }

        if(root1 == nullptr || root2 == nullptr){
            return false;
        }
        if(root1->val != root2->val){
            return false;
        }


        bool flip = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);
        bool noflip = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
       

        return flip || noflip;
        
    }
};