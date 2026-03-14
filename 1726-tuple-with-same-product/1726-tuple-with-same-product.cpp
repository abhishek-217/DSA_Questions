class Solution {
public:
    int tupleSameProduct(vector<int>& a) {
        int n = a.size(), ans=0;
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                m[a[i]*a[j]] += 1;
            }
        }
        
        for(auto it : m){
            int count = it.second;
            int temp = (count-1)*count*4;
            ans += temp;
        }
        return ans;
    }
};