class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        
        int n = apple.size();
        int m = cap.size();

        int tsum =0;

        for(int i: apple){
            tsum += i;
        }

        sort(cap.begin(), cap.end());
        int count =0;

        for(int i= m-1; i>=0; i--){
            tsum -= cap[i];
            count++;

            if(tsum <= 0){
                break;
            }
        }

        return count;
    }
};