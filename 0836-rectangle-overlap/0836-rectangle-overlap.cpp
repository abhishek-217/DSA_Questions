class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        
        if(r2[0] >= r1[2])  return false;
        if(r2[1] >= r1[3])  return false;
        if(r2[2] <= r1[0])  return false;
        if(r2[3] <= r1[1])  return false;

        return true;
    }
};