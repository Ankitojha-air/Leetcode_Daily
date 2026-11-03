class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        // int mx = *max_element(nums.begin(),nums.end());
        // // int sum = 0;
        // // for(int i =0 ; i < n;i++){
        // //     sum += nums[i];

        // // }

        // int sum = accumulate(nums.begin(),nums.end(),0);
        // return mx* n - sum;

        //2nd way
        int max = 0;
        for(int i=0 ; i < n;i++){
            if(max < nums[i])
            max = nums[i];
        }

        int ans =0;
        for(int i=0; i < n;i++){
            ans += max - nums[i];
        }
        return ans;

    }
};