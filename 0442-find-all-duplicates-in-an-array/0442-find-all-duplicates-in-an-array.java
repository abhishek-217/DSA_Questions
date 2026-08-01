class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        
        List<Integer>ans = new ArrayList<>();

        Map<Integer,Integer>mp = new HashMap<>();

        for(int num : nums){
            mp.put(num, mp.getOrDefault(num, 0) + 1);

        }

        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
            int k = entry.getKey();
            int v = entry.getValue();

            if(v > 1){
                ans.add(k);
            }

        }

        return ans;
    }
}