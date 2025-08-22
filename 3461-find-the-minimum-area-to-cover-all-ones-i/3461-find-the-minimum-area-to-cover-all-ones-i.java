class Solution {
    public int minimumArea(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;

        int minr =n;
        int minc =m;
        int max_r =0;
        int max_c =0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){

                    minr = Math.min(minr,i);
                    max_r = Math.max(max_r,i);
                    minc = Math.min(minc,j);
                    max_c =Math. max(max_c,j);
                }
            }
        }

        return (max_r - minr +1) * (max_c - minc+1);
    }
}