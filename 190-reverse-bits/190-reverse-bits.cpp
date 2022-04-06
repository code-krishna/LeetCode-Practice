class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t res=0, bit=0;
        
        for(int i=0;i<32;++i){
            bit = n&(1<<i);
            if(bit){
                res |= (1<<(31-i));
            }
        }
        
        return res;
        
    }
};