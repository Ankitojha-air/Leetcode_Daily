class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<vector<int>> arr(n, vector<int>(m));

       for(int i=0; i < n ; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = nums[n-j-1][i];
        }
       }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                nums[i][j] = arr[i][j];
            }
        }
    }
};