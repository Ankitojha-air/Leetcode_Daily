class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int l , r;
        for(int i = 0; i < arr.size(); i++){
            l =i, r=i+1;
            if(arr[l] < arr[r]) continue;
            return l;


        } 
        return l;
        
    }
};