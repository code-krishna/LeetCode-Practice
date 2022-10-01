class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp;
        int n = cost.size();
        
        for(int i=0;i<n;++i){
            dp.push_back(0);
        }
        
        n--;
        
        dp[n] = cost[n];
        dp[n-1] = cost[n-1];
        
        for(int i=n-2;i>=0;--i){
            dp[i] = min(dp[i+1], dp[i+2]) + cost[i];
        }
        
        return min(dp[0], dp[1]);
    }
};