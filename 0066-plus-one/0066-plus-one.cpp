class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry=1;
        
        for(int i=digits.size()-1;i>=0;--i){
            int tmp = digits[i]+carry;
            if(tmp>=10){
                carry=1;
                tmp%=10;
            }
            else{
                carry=0;
            }
            digits[i] = tmp;
        }
        
        if(carry!=0){
            digits.insert(digits.begin(), carry);
        }
        
        return digits;
    }
};