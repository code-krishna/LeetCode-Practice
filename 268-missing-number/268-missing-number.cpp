class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int p=0, q=nums[0];
        
        for(int i=1;i<=nums.size();++i)
            p ^= i;
        
        for(int i=1;i<nums.size();++i)
            q ^= nums[i];
        
        return p^q;
        
    }
};