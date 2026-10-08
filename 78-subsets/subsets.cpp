class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len = nums.size();
        int n = 1 << len;
        vector<vector<int>>ans;
        for(int num = 0; num < n; num++){
            vector<int>arr;
        

        for(int i =0; i < len; i++){
            int x = nums[i];
            int mask = 1 << i;
            if(num & mask) arr.push_back(x);
        }
            ans.push_back(arr);

        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};