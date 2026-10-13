class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long evenPro = 1;
        long long oddPro = 1;

        for(int i =0; i < nums.size(); i++){
            if(nums[i]<0) nums[i] = -(nums[i]);
        }

        sort(nums.begin(),nums.end());
        long long oddSum = 0;
        long long evenSum = 0;

        for(int i =0; i < nums.size()/2 ;i++){
            oddSum += nums[i]*nums[i];
        }
        for(int i = nums.size()/2; i < nums.size(); i++){
            evenSum += nums[i]*nums[i];
        }  

        return evenSum - oddSum;

        
    }
};