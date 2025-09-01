class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0; i<classes.size(); i++){
            int pass = classes[i][0];
            int total = classes[i][1];
            double res = (double)(pass+1)/(total+1) - (double)pass/total;
            pq.push({res,{pass,total}});
        }

        while(extraStudents){
            int pass = pq.top().second.first;
            int total = pq.top().second.second;
            pass++;
            total++;
            double newres = (double)(pass+1)/(total+1) - (double)pass/total;
            pq.pop();
            pq.push({newres, {pass,total}});
            extraStudents--;

        }
        double ratio =0;
        while(!pq.empty()){
            ratio = ratio + (double)(pq.top().second.first)/(pq.top().second.second);
            pq.pop();

        }

        return ratio/classes.size();

    }
};