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
            double sum =0; // Sum is zero
            int count = q1.size(); //Size of queue
            for(int i =0; i<count; ++i){

                TreeNode* temp = q1.front(); //trmp is front val of queue
                q1.pop(); //pop the front value

                sum = sum+temp->val; //Add val 

                if(temp->left){ //Check left node
                    q1.push(temp->left); //push in queue
                }
                if(temp->right){ //Check right node
                    q1.push(temp->right);
                }
                
                
            }
            re.push_back(sum/count); //Push sum of nodes and avg.
            
        }

        return re;
        
    }
};

                
