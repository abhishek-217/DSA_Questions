class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>ans;

        for(int i=0; i<op.size(); i++){
            if(op[i] == "+"){
                ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
            }else if(op[i] == "C"){
                ans.pop_back();
            }else if(op[i] == "D"){
                int r = ans[ans.size()-1]*2;
                ans.push_back(r);
            }else{
                ans.push_back(stoi(op[i]));
            }
        }

        int total =0;
        for(int i=0; i<ans.size(); i++){
            total += ans[i];
        }

        return total;
    }
};