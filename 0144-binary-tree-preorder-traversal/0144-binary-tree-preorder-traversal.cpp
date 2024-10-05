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

    vector<int>res; //Create dynamic array to store node val

    void PreO(TreeNode* root){
        if(root == NULL){ // Check root is null or not 
            return;
        }

        res.push_back(root->val); //Push back val to vector res
        PreO(root->left); // Using Recursion traverse left part
        PreO(root->right); // Using Recursion traverse right part

    }

    vector<int> preorderTraversal(TreeNode* root) {

        PreO(root); //Call void function

        return res; //Print the result
    }
};