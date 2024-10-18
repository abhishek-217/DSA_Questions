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

    TreeNode* Minval(TreeNode* root){

        TreeNode* temp = root;

        while(temp->left != nullptr){

            temp = temp->left;
        }
        return temp;

    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        //Base case

        if(root == nullptr){
            return root;
        }
        if(root->val == key){
            // 0 child
            if(root->left == nullptr && root->right == nullptr){
                delete root;
                return NULL;
            }

            // 1 child
            if(root->left == nullptr && root->right != nullptr){
                
               TreeNode* temp1 = root->right;
            
               return temp1;

            }else if(root->left != nullptr && root->right == nullptr){
                TreeNode* temp1 = root->left;
                
                return temp1;

            }

            // 2 child

            if(root->left != nullptr && root->right != nullptr){

                int mini = Minval(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right, mini);

                return root;

            }

        }else if(root->val < key){

            root->right = deleteNode(root->right, key);
         

        }else{

            root->left = deleteNode(root->left, key);
            
        }

        return root;
    }
};