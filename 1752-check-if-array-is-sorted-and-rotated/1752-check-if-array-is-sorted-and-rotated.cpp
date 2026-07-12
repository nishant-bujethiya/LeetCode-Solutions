class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();
        int count = 0;
        while(j < n) {
            if(nums[i] > nums[j]) {
                count++;
            }
            i++;
            j++;
        }
        if(nums[n - 1] > nums[0]) {
            count++;
        }
        return count <= 1;
    }
};