class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int low =0;
        int high =0;
        int result = INT_MAX;
        int sum =0;
        while(high<n){
            sum += nums[high];
            while(sum >= target){
                int len = high - low +1;
                if(result > len){
                    result = len;
                }
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        if(result == INT_MAX){
            return 0;
        }
    return result;
    }
};