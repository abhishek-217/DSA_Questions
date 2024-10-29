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

    void CheckTrav(TreeNode* root, vector<int>&num){
        if(root == nullptr){
            return ;
        }

        if(root->left == nullptr && root->right == nullptr){
            num.push_back(root->val);
        }

        CheckTrav(root->left, num);
        CheckTrav(root->right, num);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>num1;
        vector<int>num2;
     
        CheckTrav(root1, num1);
        CheckTrav(root2, num2);

        // if(num1.size() == num2.size()){
        //     int l1 = num1.size();
        //     int l2 = num2.size();
            
        //     while(l1 >= 0 && l2 >= 0){
        //         if(num1[l1-1] != num2[l2-1]){

        //             return false;

        //         }
        //         l1--;
        //         l2--;
        //     }


        // }else{
        //     return false;
        // }

        return num1 == num2;
    }
};