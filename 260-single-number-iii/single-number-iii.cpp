class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long long xor_all = 0;

        for(int num : nums){
            xor_all ^= num;
        }

        long long mask = xor_all & -xor_all;
        int first = 0;
        int second =0;

        for(int num : nums){
            if(num & mask) first ^= num;
            else second ^= num;
        }
        return {first,second};
        
    }
};