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
    long long kthLargestLevelSum(TreeNode* root, int k) {

        if(root == nullptr){
            return -1;
        }

        vector<long>ans;
        queue<TreeNode*>q1;
        q1.push(root);

        while(!q1.empty()){
            
            long long sum =0;
            int l = q1.size();

            for(int i =0; i<l; i++){

                TreeNode* temp = q1.front();
                q1.pop();
            
                sum = sum + temp->val;

                if(temp->left){
                    q1.push(temp->left);
                }
                if(temp->right){
                    q1.push(temp->right);
                }
            }

            ans.push_back(sum);
 
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());

        if(k > ans.size()){
            return -1;
        }

        return ans[k-1];
        
    }
};