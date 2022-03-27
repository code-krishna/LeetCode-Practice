class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int array[prices.size()];
        
        int max = prices[prices.size()-1];
        
        for(int i=prices.size()-1;i>=0;--i){
            
            if(prices[i] > max) max = prices[i];
            
            array[i] = max;
            
        }
        
        int result = 0;
        
        for(int i=0;i<prices.size();++i){
            
            if(array[i] - prices[i] > result) result = array[i] - prices[i];
            
        }
        
        return result;
    }
};