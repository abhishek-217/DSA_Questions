class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        int time = a+d;

        if(time >= 24){
            time = time - 24;
        }

        return time;
    }
};