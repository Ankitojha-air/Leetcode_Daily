class Solution {
public:
void solve(vector<int>&nums,int i,vector<vector<int>>&ans){
    if(i == nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int j =i; j < nums.size(); j++){
       bool dup = false;
       for(int k =i; k < j ;k++){
        if(nums[k] == nums[j]){
            dup = true;
            break;
        }
       }
       if(dup) continue;

        swap(nums[i],nums[j]);
        solve(nums,i+1,ans);
        swap(nums[i],nums[j]);
    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(nums,0,ans);
        return ans;
    }
};