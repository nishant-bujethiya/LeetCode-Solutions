class Solution {
public:
    int maxsum(vector<int> nums) {
        int n = nums.size();
        int ans1 = nums[0];
        int bestending = nums[0];
        for(int i = 1; i < n; i++) {
            int v1 = bestending + nums[i];
            int v2 = nums[i];
            bestending = max(v1, v2);
            ans1 = max(ans1, bestending);
        }
        return ans1;
    }
    int minSubarraySum(vector<int> nums) {
        int n = nums.size();
        int ans2 = nums[0];
        int worstending = nums[0];
        for(int i = 1; i < n; i++) {
            int v1 = worstending + nums[i];
            int v2 = nums[i];
            worstending = min(v1, v2);
            ans2 = min(ans2, worstending);
        }
        return ans2;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int maxValue = maxsum(nums);
        if(maxValue < 0)
            return maxValue;
        int minValue = sum - minSubarraySum(nums);
        return max(maxValue, minValue);
    }
};