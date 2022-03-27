class Solution {
public:
    int climbStairs(int n) {
        
        if(n==0 || n==1 || n==2) return n;
        
        int res, prev1=2, prev2=1;
        
        for(int i=3;i<=n;++i){
            res = prev1 + prev2;
            
            prev2 = prev1;
            prev1 = res;
        }
        
        return res;
        
    }
};