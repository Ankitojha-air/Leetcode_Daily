class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1, st2;
         for(int num : nums1){
            st1.insert(num);
         }

         vector<int> res;

        for(int num : nums2) {
            st2.insert(num);
        }


        for(int num : st1) {
            if(st2.contains(num))
            res.push_back(num);
        }

         return res;


        
    }
};