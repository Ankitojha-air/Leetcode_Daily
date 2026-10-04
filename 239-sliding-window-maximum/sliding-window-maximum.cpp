class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int>dq;
        vector<int>ans;

        //for first window
        for(int i = 0;i < k;i++){
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            //current element ko include
            dq.push_back(i);
        }
        //ans store
        ans.push_back(nums[dq.front()]);
        //remaining window
        for(int i =k; i < nums.size(); i++){
            //removal
            if(!dq.empty() && i - dq.front() >= k)
            dq.pop_front();
        
        //addition
         while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            //include current element
            dq.push_back(i);

            //ans store
            ans.push_back(nums[dq.front()]);
    }

            return ans;
        
    }
};