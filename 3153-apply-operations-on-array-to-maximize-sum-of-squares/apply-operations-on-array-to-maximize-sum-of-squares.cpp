class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int>count(32,0);
    
        long long sum =0;

        for(int n : nums){
            for(int b =0; b < 32 ; b++){
                if(n & (1 << b)) count[b]++;
            }
        }

        while(k--){
            long long curr = 0;
            for(int b =0; b < 32; b++){
                if(count[b] > 0){
                    count[b]--;
                    curr = (curr | (1 << b));
                }
                
            }
            sum = (sum + curr * curr) % (1000000000 + 7);
        }
        return sum;
      
        
        
    }
};