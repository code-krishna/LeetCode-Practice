class Solution {
public:
    int dp[1000][1000];
    int longestCommonSubsequence(string text1, string text2) {
        
        string rs=text1, s = text2;
        int mx = INT_MIN;
        
        if(rs[0]==s[0]){
            dp[0][0] = 1;
        }
        else{
            dp[0][0] = 0;
        }
        
        for(int i=1;i<s.size();++i){
            if(s[i]==rs[0])
                dp[0][i] = 1;
            else
                dp[0][i] = dp[0][i-1];
        }
        
        for(int i=1;i<rs.size();++i){
            if(rs[i]==s[0])
                dp[i][0] = 1;
            else
                dp[i][0] = dp[i-1][0];
        }
        
        for(int i=1;i<rs.size();++i){
            for(int j=1;j<s.size();++j){
                if(rs[i]==s[j]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
                
            }
        }
        
        for(int i=0;i<rs.size();++i){
            for(int j=0;j<s.size();++j){
                mx = max(dp[i][j], mx);
            }
        }
        
        return mx < 0 ? 0: mx;
        
    }
};