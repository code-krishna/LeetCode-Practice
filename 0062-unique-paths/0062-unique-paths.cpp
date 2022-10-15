class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int dp[m][n];
        
        dp[m-1][n-1] = 0;
        
        for(int i=0;i<m;++i){
            dp[i][n-1] = 1;
        }
        
        for(int i=0;i<n;++i){
            dp[m-1][i] = 1;
        }
        
        //dp[m-2][n-2] = dp[m-2][n-1] + dp[m-1][n-2];
        
        for(int i=m-2;i>=0;--i){
            for(int j=n-2;j>=0;--j){
                dp[i][j] = dp[i][j+1] + dp[i+1][j];
            }
        }
        
        return dp[0][0];
    }
};