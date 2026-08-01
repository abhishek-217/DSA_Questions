class Solution {
    public int majorityElement(int[] nums) {
        
       Map<Integer,Integer>mp = new HashMap<>();

       for(int i=0; i<nums.length; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i],0) + 1);
       }

       int ans = 0;
       int maxi = 0;

        for(Map.Entry<Integer, Integer>entry: mp.entrySet()){
            int k = entry.getKey();
            int v = entry.getValue();

            if(v > maxi){
                maxi = v;
                ans = k;
            }
        }

        return ans;

    }


    
}