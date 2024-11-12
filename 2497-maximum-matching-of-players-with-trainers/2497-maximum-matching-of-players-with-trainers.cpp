class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        
        sort(p.begin(), p.end());
        sort(t.begin(), t.end());

        int res =0;
        int j=0;

        while(res< p.size() && j<t.size()){
            if(p[res]<= t[j]){
                res++;
            }

            j++;
        }

        return res;
         
    }
};