class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int l1 = g.size();
        int l2 = s.size();
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i =0;
        int j =0;
       
       while(i<l1 && j<l2){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
       }    
       

        return i;
    }
};