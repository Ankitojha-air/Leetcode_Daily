class Solution {
public:
    bool checkDivisibility(int n) {

        int num = n;
        int pro = 1 , sum =0;
        while(num > 0){
            int digit = num % 10;
            sum += digit;
            pro *= digit;
            num /= 10;
        }

        if(n % (pro + sum) == 0) return true;
        else return false;
        
    }
};