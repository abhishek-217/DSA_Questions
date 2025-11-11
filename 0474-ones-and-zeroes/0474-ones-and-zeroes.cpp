class Solution {
public:
unordered_map<int,int>mp0,mp1;
    int solve(int ind,vector<string>&strs,int m,int n,vector<vector<vector<int>>>&dp)
    {
        if(ind>strs.size())
        {
            return 0;
        }
        if(dp[ind][m][n]!=-1)
            return dp[ind][m][n];
        int take=0;
        if(mp0[ind]<=m && mp1[ind]<=n)
        {
            take=1+solve(ind+1,strs,m-mp0[ind],n-mp1[ind],dp);
        }
        int nottake= solve(ind+1,strs,m,n,dp);
        
        return dp[ind][m][n]=max(take,nottake);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        int x=strs.size();
        vector<vector<vector<int>>>dp(x+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        for(int i=0;i<strs.size();i++)
        {
            string st=strs[i];
            for(int j=0;j<st.size();j++)
            {
                if(st[j]=='0')
                {
                    mp0[i]++;
                }else
                    mp1[i]++;
            }
        }
        return solve(0,strs,m,n,dp)-1;
    }
};