class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        sort(nums.begin(),nums.end());
        int ans = 0;

        int median = nums.size()/2;
    
        for(int i =0 ; i < nums.size();i++){
            ans += abs(nums[i] - nums[median]);
        }
        return ans;
    }
};