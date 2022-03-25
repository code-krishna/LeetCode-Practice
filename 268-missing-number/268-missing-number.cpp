class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int p=0, q=0;
        
        p = (nums.size()*(nums.size()+1))/2;
        
        for(int i=0;i<nums.size();++i)
            q += nums[i];
        
        return p-q;
        
    }
};