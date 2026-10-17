class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        vector<int> target(n);

        for (int i = 0; i < n; i++) {
            target[i] = arr[i].second;
        }

        unordered_map<int, int> position;

        for (int i = 0; i < n; i++) {
            position[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == target[i]) {
                continue;
            }

            int correctPos = position[target[i]];

            swap(nums[i], nums[correctPos]);

            position[nums[correctPos]] = correctPos;
            position[nums[i]] = i;

            swaps++;
        }

        return swaps;
    }
};