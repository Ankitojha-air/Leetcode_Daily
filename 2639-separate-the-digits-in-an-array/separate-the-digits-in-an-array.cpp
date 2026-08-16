class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> arr;
        for(int i= 0; i<nums.size(); i++){
            int x = nums[i];
            vector<int>t;
            while(x > 0){
                int rem = x % 10;
                t.push_back(rem);
                x =x / 10;

            }
            reverse(t.begin(),t.end());
            for(int j=0; j<t.size();j++){
                arr.push_back(t[j]);
            }
        }
        return arr;

    }
};