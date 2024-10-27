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

    TreeNode* CreateTree(vector<int>& arr, int s, int e){

        if(s>e){
            return nullptr;
        }

       int mid = (s+e)/2;

        // TreeNode* root = new TreeNode(arr[mid]);
        TreeNode* root = new TreeNode(arr[mid]);

        root->left = CreateTree(arr, s, mid-1);
        root->right = CreateTree(arr, mid +1, e);

        return root;
       
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        if(nums.size() == 0){
            return nullptr;

        }

        return CreateTree(nums, 0, nums.size()-1);

        // int mid = nums.size()/2;

        // TreeNode* root = new TreeNode(nums[mid]);


        // vector<int>left(nums.begin(), nums.begin() + mid);

        // root->left = sortedArrayToBST(left);

        // vector<int>right(nums.begin() + mid+1, nums.end());
        // root->right = sortedArrayToBST(right);

        // return root;
        
    }
};