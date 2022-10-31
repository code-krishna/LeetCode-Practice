class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==1){
            return nums[0];
        }
        
        int n1=0, n2=0, n3=0;
        
        for(int i=0;i<nums.size()-1;++i){
            n3 = max(n2, n1+nums[i]);
            n1 = n2;
            n2 = n3;
        }
        
        int a1=0, a2=0, a3=0;
        
        for(int i=1;i<nums.size();++i){
            a3 = max(a2, a1+nums[i]);
            a1 = a2;
            a2 = a3;
        }
        
        return max(a2, n2);
        
    }
};