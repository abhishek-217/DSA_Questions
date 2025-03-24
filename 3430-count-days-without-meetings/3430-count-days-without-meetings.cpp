class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        // unordered_map<int,int>mp;
        // for(int i=1; i<=d; i++){
        //     mp[i] =0;
        // }
        // int count =0;

        // for(int i=0; i<m.size(); i++){

        //     while(m[i][1] >= m[i][0]){
        //         if(mp[m[i][1]] == 0){
        //             mp[m[i][1]]++;

        //         }
        //         m[i][1]--;
        //     }
        // }

        // for(auto &[key,val] : mp){
        //     if(val == 0){
        //         count ++;
        //     }
        // }

        // return count;


        sort(meetings.begin(), meetings.end());
        int n = meetings.size();

        int prevs = meetings[0][0];
        int preve = meetings[0][1];

        int ans = 0;

        for (int i = 1; i < n; i++) {
            int a = meetings[i][0];
            int b = meetings[i][1];
            if (a <= preve) {
                preve = max(preve, b);
            } else {
                ans += preve - prevs + 1;
                prevs = a;
                preve = b;
            }
        }
        
        ans += preve - prevs + 1;
        return days - ans;

    }
};