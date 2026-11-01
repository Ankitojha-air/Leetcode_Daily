// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
//         int mx = *max_element(nums.begin(),nums.end());
//         long long sum = 0;
//         long long real_sum = 1LL* nums.size() *mx;
//         for(int i =0; i < nums.size(); i++){
//             sum += nums[i];
//         }
//         return (int)real_sum - sum;

//     }
// };

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());

        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        return sum - 1LL * nums.size() * mn;
    }
};