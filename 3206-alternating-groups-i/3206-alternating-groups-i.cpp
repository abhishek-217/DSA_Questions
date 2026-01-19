class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c) {
        int count =0;

        int n = c.size();
        if(n<3){
            return 0;
        }

        for(int i=1; i<n-1; i++){
            if(c[i-1] == c[i+1] && c[i] != c[i+1]){
                count++;
            }
        }

        if(c[n-2] == c[0] && c[n-1] != c[0]){
            count++;
        }
        if(c[n-1] == c[1] && c[n-1] != c[0]){
            count++;
        }

        return count;
    }
};