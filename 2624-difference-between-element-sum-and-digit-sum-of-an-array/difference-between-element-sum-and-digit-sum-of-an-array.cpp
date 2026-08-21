class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int diff = 0;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];

               while(nums[i] > 0){
                int digit = nums[i] % 10;
                nums[i]=nums[i]/10;
                diff +=digit;
               }
        }
        return abs(sum - diff);   
    }
};