class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t res=0, a=1, b=1<<31, bit=0;
        
        for(int i=0;i<32;++i){
            
            //cout<<a<<endl;
            bit = n&a;
            if(bit){
                res |= b;
            }
            a = a << 1;
            b = b >> 1;
        }
        
        return res;
        
    }
};