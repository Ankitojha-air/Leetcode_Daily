
class Solution {
public:
    // vector<int> binSearch(vector<int>& nums, int low, int high,int target, vector<int>& ans) {              
    //     int firstInd = -1;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;

    //         if (nums[mid] == target) {
    //             firstInd = mid;
    //             high = mid - 1;
    //         }
    //         else if (nums[mid] < target) {
    //             low = mid + 1;
    //         }
    //         else {
    //             high = mid - 1;
    //         }
    //     }

    //     if (firstInd == -1) return ans;

    //     while (firstInd < nums.size() &&
    //            nums[firstInd] == target) {
    //         ans.push_back(firstInd);
    //         firstInd++;
    //     }

    //     return ans;
    // }

    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == target) ans.push_back(i);
          }
          return ans;
        // return binSearch(nums, 0, nums.size() - 1, target, ans);
    }
};
