class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        int s = rectangles.size();
        vector<vector<int>> ver, hor;

        // Store vertical and horizontal segment ranges
        for (auto i : rectangles) {
            ver.push_back({i[0], i[2]});
            hor.push_back({i[1], i[3]});
        }

        // Sort vertical segments
        sort(ver.begin(), ver.end());
        int cnt = 1, mx = ver[0][1];

        // Check for vertical cuts
        for (int i = 1; i < s; i++) {
            if (ver[i][0] < mx) 
                mx = max(mx, ver[i][1]);
            else {
                cnt++;
                mx = ver[i][1];
            }
            if (cnt >= 3) return true;
        }

        // Sort horizontal segments
        sort(hor.begin(), hor.end());
        cnt = 1, mx = hor[0][1];

        // Check for horizontal cuts
        for (int i = 1; i < s; i++) {
            if (hor[i][0] < mx) 
                mx = max(mx, hor[i][1]);
            else {
                cnt++;
                mx = hor[i][1];
            }
            if (cnt >= 3) return true;
        }

        return false;
    }
};