class Solution {
public:
    int maxEvents(vector<vector<int>>& e) {
        int count =0;
        int l = e.size();

        int maxDay =0;


        for(int i=0; i<l; i++){
           maxDay = max(maxDay, e[i][1]);
            
        }
        sort(e.begin(), e.end());
        priority_queue<int, vector<int>, greater<> >pq;

        for(int i=1 , j =0; i<= maxDay; i++){
            while(j<l && e[j][0] <= i){
                pq.emplace(e[j][1]);
                j++;
            }

            while(!pq.empty() && pq.top() < i){
                pq.pop();
            }

            if(!pq.empty()){
                pq.pop();
                count++;
            }
        }


        return count;
    }
};