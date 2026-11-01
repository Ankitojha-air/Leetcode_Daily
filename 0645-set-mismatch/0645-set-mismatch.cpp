// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         vector<int>ans;
//         int n = nums.size();
//         int sum =0;
//         sort(nums.begin(),nums.end());
//         for(int i =0; i < nums.size()-1;i++){
//             if(nums[i] == nums[i+1]){
//                 ans.push_back(nums[i]);
//                 break;
//             }
//         }

//         for(int i = 0; i < n ; i++){
//             sum += nums[i];
//         }

//         int org_sum = n*(n+1)/2;
//         int s = org_sum - sum + ans[0];
//         ans.push_back(s);

//         return ans;

//     }
// };



class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int duplicate = 0;
        int missing = 1;

        for (int i = 0; i < n; i++) {

            // Find duplicate
            if (i > 0 && nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }

            // Find missing
            if (nums[i] == missing) {
                missing++;
            }
        }

        return {duplicate, missing};
    }
};
