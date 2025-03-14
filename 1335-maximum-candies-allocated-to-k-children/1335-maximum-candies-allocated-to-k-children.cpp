class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {

        int l = 0;
        int r;

        for(int i=0; i<c.size(); i++){
            r = max(r,c[i]);
        }

        while(l<r){
            int m = (l + r+1)/2;

            if(candi(c,k,m)){
                l = m;
            }else{
                r = m -1;
            }
        }

        return l;
       
    }

    bool candi(vector<int>&c, long long k, int m){
        long long int maxc=0;

        for(int i=0 ; i<c.size(); i++){
            maxc+= c[i]/m;
        }

        return maxc >= k;

    }
};