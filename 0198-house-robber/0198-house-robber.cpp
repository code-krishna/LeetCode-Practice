class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        if(nums.size()==1)
            return nums[0];
        
        int dp[nums.size()+5];
        
        for(int i=0;i<nums.size()+5;++i){
            dp[i] = 0;
        }
        
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i=2;i<nums.size();++i){
            dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
        }
        
        return dp[nums.size()-1];
        
    }
};