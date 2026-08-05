class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();

        while (i < n) {
            if (nums[i] == val) {
                swap(nums[i], nums[n - 1]);
                n--;              // One less valid element
            } else {
                i++;              // Move ahead only if current element is valid
            }
        }

        return n;
    }
};