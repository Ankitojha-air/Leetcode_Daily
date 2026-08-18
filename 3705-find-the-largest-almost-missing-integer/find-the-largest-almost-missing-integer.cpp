class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>check;
        for(int i = 0;i < n;i++){
            check[nums[i]]++;
        }

        if(k == 1){
            int mx = -1;
            for(auto it : check){
                if(it.second == 1) mx =  max(mx,it.first);
            }
            return mx;
        }
        else{
            int x = nums[0];
            int y = nums[n-1];
            if(k == n) return *max_element(nums.begin(),nums.end());
            else if(check[x] == 1 && check[y] == 1) return max(x,y);
            else if(check[x] == 1 && check[y] != 1) return x;
            else if(check[x] != 1 && check[y] == 1) return y;
            else return -1;
        }
    }
};