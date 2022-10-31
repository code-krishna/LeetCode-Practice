class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n1=0, n2=0, n3=0;
        
        for(int i=0;i<nums.size();++i){
            n3 = max(n2, n1+nums[i]);
            n1 = n2;
            n2 = n3;
        }
        
        return n2;
        
    }
};