class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx_one = 0;
        int count =0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                
                count =0;
            }
            mx_one = max(count,mx_one);
           
        }
        return mx_one;
    }
};