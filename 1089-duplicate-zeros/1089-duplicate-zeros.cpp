class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int>nums;

        for(int i =0; i < n; i++){
            nums.push_back(arr[i]);

            if(arr[i] == 0) nums.push_back(0);
        }
        for(int i =0;i < n; i++){
            arr[i] = nums[i];
        }
    }
};