class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       vector<pair<int,int>>arr;

       for(int i =0 ; i < score.size();i++){

            arr.push_back({score[i][k], i});
       }
       sort(arr.begin(),arr.end());
        vector<vector<int>>ans(score.size(),vector<int>(score[0].size()));
        int p = 0;
       for(int i = arr.size()-1;i >= 0;i--){
            int row = arr[i].second;
            for(int j = 0;j < score[0].size();j++){
                ans[p][j] = score[row][j];
            }
            p++;
       }


        

        
        return ans;
    }
};