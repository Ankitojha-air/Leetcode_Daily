class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int>freq(100001,0);
        int maxDiff = 0;
        long long totalDiff = 0;

        for(int i =0;i < nums1.size();i++){
            int diff = abs(nums1[i] - nums2[i]);
            freq[diff]++;
            totalDiff += diff;

            maxDiff = max(maxDiff,diff);
        }
        long long k =(long long) k1 + k2;
        if(totalDiff <= k) return 0;

        for(int d =maxDiff; d > 0 && k>0;d--){
            int moves = (int)min(k,(long long)freq[d]);
            freq[d] -= moves;
            freq[d-1] +=moves;
            k -=moves;
        }
        long long ans = 0;
        for(int d =1; d <= maxDiff;d++){
            ans += (long long)d*d*freq[d];
        }
        return ans;
    }
};