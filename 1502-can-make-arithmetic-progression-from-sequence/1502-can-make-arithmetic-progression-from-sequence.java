class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        
        if(arr.length>=0 && arr.length<=2) return true;
        
        Arrays.sort(arr);
        
        int diff=0;
        
        diff = arr[1] - arr[0];
        
        for(int i=2;i<arr.length;++i){
            if(diff!=arr[i] - arr[i-1]) return false;
        }
        
        return true;
    }
}