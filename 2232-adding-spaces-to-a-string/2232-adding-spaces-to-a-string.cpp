class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int l = s.size();
        int k =0;
        for(int i=0; i<l; i++){
           if(k <spaces.size() && i == spaces[k]){
                ans.push_back(' ');
                k++;
            }
            ans.push_back(s[i]);
        }

        return ans;

    }
};