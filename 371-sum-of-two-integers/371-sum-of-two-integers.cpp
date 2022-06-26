class Solution {
public:
    int getSum(int a, int b) {
        
        while(b){
            unsigned tmp = a&b;
            a = a^b;
            b = tmp << 1;
        }
        
        return a;
        
    }
};