class Solution {
    public int countOdds(int low, int high) {
        
        int odd1=0, odd2=0;
        
        odd1 = high/2;
        odd2 = low/2;
        
        int res = high%2!=0 ? odd1-odd2+1 : odd1-odd2;
        
        return res;
    }
}