class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l=0, r=l+1, result=0;
        
        while(l<r && r<prices.size()){
            
            if(prices[l] > prices[r]){
                l=r;
                r=l+1;
            }
            
            else{
                
                if(prices[r] - prices[l] >  result){
                    result = prices[r] - prices[l];
                }
                r++;
            }
            
        }
        return result;
    }
};