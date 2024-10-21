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

    void ReverseInorder(TreeNode* root, int &ans){

        // Right - Node - Left Reverse of Inorder Traversal to get Greater Sum Tree
        if(root == nullptr){    //Base Case to handle root null
            return ;
        }
        ReverseInorder(root->right , ans);  //Recursive call to root->right

        ans = ans + root->val; //add root value and ans 
        root->val = ans; //initailize root->val to ans
        
        ReverseInorder(root->left, ans); //Recursive call to root->left

    }
    TreeNode* bstToGst(TreeNode* root) {

        int ans = 0;
        ReverseInorder(root, ans); //Call ReverseOrder Function

        return root;

       
    }
};