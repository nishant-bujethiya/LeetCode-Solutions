class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int worstproduct = nums[0];
        int bestproduct = nums[0];
        int ans = nums[0];
        for(int i = 1; i < n; i++){
            int v1 = bestproduct * nums[i];
            int v2 = worstproduct * nums[i];
            int v3 = nums[i];
            bestproduct = max(v1, max(v2, v3));
            worstproduct = min(v1, min(v2, v3));
            ans = max(ans, max(bestproduct,worstproduct));
        }
        return ans;
    }
};