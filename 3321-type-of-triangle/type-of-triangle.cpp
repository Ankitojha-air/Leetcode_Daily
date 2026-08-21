class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count =1;
        
        int sum = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i]==nums[i+1])
            count++;
            sum+=nums[i];
        }

        if(sum > nums[nums.size()-1]){
            
        if(count == 2) return "isosceles";
        else if(count == 1) return "scalene";
        else return "equilateral";
        }

        else return "none";

        
    }
};