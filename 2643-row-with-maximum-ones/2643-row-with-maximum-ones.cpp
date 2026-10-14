class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n =mat.size();
        int m = mat[0].size();
        int mx = -1;
        vector<int>arr;
        int row = 0;

        for(int i =0; i < n; i++){
            int count =0;
            for(int j =0; j < m; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > mx){
                mx = count; // number of 1's
                row  =i;    //tell me the row which has the max
            }
        
        }
        arr.push_back(row);
        arr.push_back(mx);
        return arr;
      
    }
};