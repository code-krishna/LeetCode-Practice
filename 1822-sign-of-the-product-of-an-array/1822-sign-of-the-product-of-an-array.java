class Solution {
    public int arraySign(int[] nums) {
        
        int sign = 1;
        
        for(int i: nums){
            
            sign = i > 0? sign : sign*(-1);
            
            if(i==0) return 0;
        }
        return sign;
        
    }
}