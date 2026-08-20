class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i = 2; i < nums.size(); i++){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[i]);
            }
            else if (arr2.back() > arr1.back()){
                arr2.push_back(nums[i]);
            }
        }
        for(int num : arr1){
            ans.push_back(num);
        }
        for(int num : arr2){
            ans.push_back(num);
        }

        return ans;
        
     }
    };

     