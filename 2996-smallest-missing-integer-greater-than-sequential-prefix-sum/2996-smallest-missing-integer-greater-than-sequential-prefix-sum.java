class Solution {
    public int missingInteger(int[] nums) {
        
        // HashMap use here
        // for better and fast use HashSET

        int n = nums.length;

        Map<Integer, Integer>mp = new HashMap<>();

        for(int i : nums){
            mp.put(i, mp.getOrDefault(i,0) + 1);
        }

        
        int sum =nums[0];

        for(int i=1; i<n; i++){
            if(nums[i-1] + 1 == nums[i]){
                sum += nums[i];
            }else{
                break;
            }
        }


        while(mp.containsKey(sum)){
            sum++;
        }
        return sum;
        // for(Map.Entry<Integer, Integer>entry : mp.entrySet()){
        //     if(entry.containsKey(sum)){
        //         sum++;
        //     }else{
        //         break;
        //     }
        // }

    }
}