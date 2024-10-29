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

    TreeNode* InsertVal(TreeNode* &root, int data){
    //Base Case

        if(root == NULL){
            root = new TreeNode(data);
            return root;
        }

        if(data > root->val){

            root->right = InsertVal(root->right, data);
        }else{
            root->left = InsertVal(root->left, data);

        }

        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {

       TreeNode* root = nullptr;
        int l = preorder.size();

        for(int i=0; i<l; i++){
            InsertVal(root, preorder[i]);
        }
    
        return root;
 
    }
};