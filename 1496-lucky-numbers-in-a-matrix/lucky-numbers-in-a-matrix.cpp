class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>arr;
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i =0;i < m;i++){
            int min = INT_MAX;
            for(int j =0;j < n; j++){
                if(min > matrix[i][j]){
                    min = matrix[i][j];
                }
            }
            arr.push_back(min);

        }
        
        vector<int>nums;
         for(int i =0;i < n;i++){
            int max=INT_MIN;
            for(int j =0;j < m; j++){
                if(max < matrix[j][i]){
                    max = matrix[j][i];
                }
            }
            nums.push_back(max);

        }
       
         for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(arr[i] == nums[j]) {
                    return {arr[i]};
                }
            }
        }

        return {};

    }
};