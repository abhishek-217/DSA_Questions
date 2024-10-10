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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        queue<TreeNode*>q1;
        vector<double>re;
        q1.push(root);

        while(!q1.empty()){
            double sum =0;
            int count = q1.size();
            for(int i =0; i<count; ++i){

                TreeNode* temp = q1.front();
                q1.pop();
                
                sum = sum+temp->val;

                if(temp->left){
                    q1.push(temp->left);
                }
                if(temp->right){
                    q1.push(temp->right);
                }
                
                
            }
            re.push_back(sum/count);
            
        }

        return re;
        
    }
};

                
