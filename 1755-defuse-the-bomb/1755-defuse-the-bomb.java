class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length;
        int[] res = new int[n];

        if (k == 0) {
          
            return res;
        } else if (k < 0) {
      
            for (int i = 0; i < n; i++) {
                int K = k;
                while (K != 0) {
                    int idx = (i + K + n) % n;
                    res[i] += code[idx];
                    K++;
                }
            }
        } else {
          
            for (int i = 0; i < n; i++) {
                int K = k;
                while (K != 0) {
                    int idx = (i + K) % n;
                    res[i] += code[idx];
                    K--;
                }
            }
        }
        return res;
    }
}