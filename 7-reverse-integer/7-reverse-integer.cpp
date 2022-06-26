#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x)
        {
            int rem = x%10;
            if(result > INT_MAX/10 || result == INT_MAX/10 && rem > 7)
            {
                result = 0;
                break;
            }
            else if(result < INT_MIN/10 || result == INT_MIN/10 && rem < -8)
            {
                result = 0;
                break;
            }
            result = result*10 + rem;
            x/=10;
        }
        return result;
    }
};