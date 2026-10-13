class Solution {
public:
    int count =0;
    int maxOR;

    void solve(vector<int>&nums,int i,int currOR){
        //base case
        if(i == nums.size()){
            if(currOR == maxOR) count++;
            return;
        }
        solve(nums,i+1,currOR);
        solve(nums,i+1,currOR | nums[i]);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        maxOR =0;
        count = 0;

        for(int n : nums){
            maxOR |= n;
        }
        solve(nums,0,0);
        return count;   
    }
};