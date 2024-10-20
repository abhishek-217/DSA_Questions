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

    void InorderTrav(TreeNode* root, vector<int>&ans){

        if(root == nullptr){
            return ;
        }
        InorderTrav(root->left, ans);
        ans.push_back(root->val);
        InorderTrav(root->right, ans);

    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>res1;
        vector<int>res2;
        InorderTrav(root1, res1);
        InorderTrav(root2, res2);

        vector<int>ans;
        for(int i=0; i<res1.size(); i++){
            ans.push_back(res1[i]);
        }
        for(int i=0; i<res2.size(); i++){
            ans.push_back(res2[i]);
        }

        sort(ans.begin(), ans.end());

        return ans;

    }
};