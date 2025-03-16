class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long low = 1 , high = 1e18 , n = ranks.size(); 
        while (low < high) {
            long long mid = low + (high - low)/2 , carsRepaired = 0;

            for (int i = 0 ; i < n; i++) 
            carsRepaired += sqrt(mid/ranks[i]);

            if (carsRepaired >= cars) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};