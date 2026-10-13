class Solution {
public:
    long long removeZeros(long long n) {
        long long num = n;
        long long rev = 0;
        while(num > 0){
            int digit = num % 10;
            if(digit != 0){
                rev = rev* 10 + digit;
            }
            num /= 10;
        }
    long long ans =0;
        while(rev > 0){
            int digit = rev % 10;
            ans = ans * 10 + digit;
            rev /= 10;
        }
        
        return ans;
    }
};