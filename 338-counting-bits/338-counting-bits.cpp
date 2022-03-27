class Solution {
public:
    
    int numberOfBits(int n){
        
        int count=0;
        
        while(n){
            count++;
            n = n & (n-1);
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        
        vector<int> result;
        
        for(int i=0;i<=n;++i){
            
            result.push_back(numberOfBits(i));
            
        }
        
        return result;
    }
    
};