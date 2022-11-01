class Solution {
private: 
    double findExponent(double x, long n){
    
    if(n<0){
            return 1/findExponent(x, (-1)*n);
        }
        
        if(n==1){
            return x;
        }
        
        if(n==0){
            return 1;
        }
        
        double result = findExponent(x, n/2);
        
        if(n%2==0){
            return result*result;
        } else{
            return result*result*x;
        }
    
}
public:
    double myPow(double x, int n) {
        
        return findExponent(x, n);
        
    }
};