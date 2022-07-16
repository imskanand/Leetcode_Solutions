class Solution {
public:
  int memo[51][51][51]; //declare a DP table
    int mod = 1000000007;
    
    long findPathsH(int m, int n, int maxMove, int i, int j){
        //check for out of boundry case
        if(i>=m || i<0 || j>=n || j<0){
            return 1;
        }
        // check for Maxmove limit
        if(maxMove <= 0){
            return 0;
        }
        //if output is present in DP table then take it.
        if(memo[i][j][maxMove] != -1){
            return memo[i][j][maxMove];
        }
        
        long res = 0;
        res += findPathsH(m, n, maxMove - 1, i-1, j); //call for up
        res += findPathsH(m, n, maxMove - 1, i+1, j); //call for down
        res += findPathsH(m, n, maxMove - 1, i, j+1); //call for right
        res += findPathsH(m, n, maxMove - 1, i, j-1); //call for left
        return memo[i][j][maxMove] = res % mod; //stores output in DP table 
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(memo, -1, sizeof(memo)); //intialize DP table with -1.
        return findPathsH(m, n, maxMove, startRow, startColumn) % mod;
    }
};