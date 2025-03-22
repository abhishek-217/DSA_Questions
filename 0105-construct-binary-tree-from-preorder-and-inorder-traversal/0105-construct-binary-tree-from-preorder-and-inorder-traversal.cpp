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
    
    TreeNode* splittree(vector<int>&pre, map<int,int>&ino, int rindex, int left, int right){
        TreeNode* root = new TreeNode(pre[rindex]);

        int mid = ino[pre[rindex]];

        if(mid > left){
            root->left = splittree(pre,ino, rindex+1, left, mid-1);
        }
        if(mid< right){
            root->right = splittree(pre, ino, rindex + mid - left +1, mid+1, right );
        }

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int,int>ino;

        for(int i =0; i<inorder.size(); i++){
            ino.insert({inorder[i],i});
        }

        return splittree(preorder, ino, 0 , 0, inorder.size()-1);
    }
};