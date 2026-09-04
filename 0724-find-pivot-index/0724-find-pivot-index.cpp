// unoptimised approach

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> prefix(n, 0);
//         vector<int> suffix(n, 0);
//         for(int i = 1; i < n; i++) {
//             prefix[i] = prefix[i - 1] + nums[i - 1];
//         }
//         for(int i = n - 2; i >= 0; i--) {
//             suffix[i] = suffix[i + 1] + nums[i + 1];
//         }
//         for(int i = 0; i < n; i++) {
//             if(prefix[i] == suffix[i]) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int right = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }
        right = sum - nums[0];
        if(left == right) {
            return 0;
        }
        for(int i = 1; i < n; i++) {
            left += nums[i - 1];
            right = sum - nums[i] - left;
            if(left == right) {
                return i;
            }
        }
        return -1;
    }
};