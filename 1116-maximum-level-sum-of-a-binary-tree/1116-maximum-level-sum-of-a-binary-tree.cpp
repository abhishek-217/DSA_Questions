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
    int maxLevelSum(TreeNode* root) {
        if( root== nullptr){
            return 0;
        }

        queue<TreeNode*>q;
        q.push(root);
        int l = 1;
        int maxl = 1;
        int maxv=INT_MIN;

        while(!q.empty()){
            int n = q.size();
            int sum =0;

            for(int i=0; i<n; i++){
                TreeNode* t = q.front();
                q.pop();
                sum = sum + t->val;

                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }

            }
            if(sum>maxv){
                maxv = sum;
                maxl = l;
            }

            l++;
            
        }

        return maxl;
    }
};