class Solution {
    public int distributeCandies(int[] cT) {
        int n = cT.length;

        Map<Integer,Integer>mp = new HashMap<>();

        for(int i=0; i<n; i++){
            mp.put(cT[i], mp.getOrDefault(cT[i], 0) + 1);
        }

        int p = mp.size();
        int ans = n/2;

        if(p >= ans){
            return ans;
        }

        return p;
    }
}