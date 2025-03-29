class Solution {
 const int mod=1e9+7;
    int getdistprimes(int n,vector<int>& spf) {
        int count=0;
        while(n!=1){
            count++;
            int k=spf[n];
            while(n!=1&&n%k==0) n/=k;
        }
        return count;
    }
    long long modExp(long long x,long long y) {
        x=x%mod;
        long long res=1ll;
        while(y){
            if(y&1ll) res=(res*x)%mod;
            y>>=1ll;
            x=(x*x)%mod;
        }
        return res;
    }
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size(),mx=*max_element(nums.begin(),nums.end());
        vector<int> spf(mx+1);
        iota(spf.begin(),spf.end(),0);
        for(int i=2;i*i<=mx;++i){
            if(spf[i]==i){
                for(int j=i;i*j<=mx;++j){
                    if(spf[i*j]==i*j) spf[i*j]=i;
                }
            }
        }
        //for(int p : spf) cout<<p<<" ";
        vector<int> dist(n);
        for(int i=0;i<n;++i){
            dist[i]=getdistprimes(nums[i],spf);
        }
        map<int,long long,greater<>> freq;
        stack<int> st;
        for(int i=0;i<n;++i){
            while((!st.empty())&&(dist[st.top()]<dist[i])){
                int j = st.top();
                st.pop();
                int l=st.empty() ? -1 : st.top();
                freq[nums[j]]=(freq[nums[j]]+(long long)(j-l)*(i-j));
            }
            st.push(i);
        }
        while(!st.empty()){
            int j = st.top();
            st.pop();
            int l=st.empty() ? -1 : st.top();
            freq[nums[j]]=(freq[nums[j]]+(long long)(j-l)*(n-j));
        }
        long long score=1;
        for(auto i : freq){
            //cout<<i.first<<","<<i.second<<" ";
            score=(score*modExp(i.first,min<long long>(i.second,k)))%mod;
            k-=min<long long>(i.second,k);
            if(k==0) break;
        }
        return score;
    }
};