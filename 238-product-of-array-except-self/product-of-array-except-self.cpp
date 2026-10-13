class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>arr(nums.size(),1);
       int prefix = 1;
       for(int i =0;i < nums.size();i++){
        arr[i] = prefix*arr[i];
        prefix *= nums[i];
       }

       int suffix = 1;
       for(int i =nums.size()-1;i >=0;i--){
        arr[i] *= suffix;
        suffix *= nums[i];
       }

        return arr;
    }
};