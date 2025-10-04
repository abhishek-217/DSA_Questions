class Solution {
    public int maxArea(int[] h) {
        int e = h.length -1;

        int s = 0;

        int Maxwater =0;
        while(s < e){
            int curr = Math.min(h[s] , h[e]) * (e-s);
            Maxwater = Math.max(curr, Maxwater);

            if(h[s] < h[e]){
                s++;
            }else{
                e--;
            }
        }

        return Maxwater;
    }
}