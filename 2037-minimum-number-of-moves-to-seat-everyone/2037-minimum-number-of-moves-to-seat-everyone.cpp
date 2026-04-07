class Solution {
public:
    int minMovesToSeat(vector<int>& s1, vector<int>& st2) {
        
        sort(s1.begin(), s1.end());
        sort(st2.begin(), st2.end());

        int move =0;

        for(int i=0; i<s1.size(); i++){
            move += abs(s1[i] - st2[i]);
        }

        return move;
    }
};