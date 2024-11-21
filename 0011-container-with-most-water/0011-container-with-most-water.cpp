class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int left =0;
        int right = h.size()-1;

        int maxA =0;

        while(left <right){
            int curA = min(h[left], h[right]) * (right - left);
            maxA = max(maxA, curA);

            if(h[left] < h[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxA;
    }
};