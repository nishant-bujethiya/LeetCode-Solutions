class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> merged(m + n);
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (i >= 0 && j >= 0) {

            if (nums1[i] >= nums2[j]) {
                merged[k] = nums1[i];
                i--;
            }
            else {
                merged[k] = nums2[j];
                j--;
            }

            k--;
        }
        while (i >= 0) {
            merged[k] = nums1[i];
            i--;
            k--;
        }
        while (j >= 0) {
            merged[k] = nums2[j];
            j--;
            k--;
        }
        int total = m + n;
        if (total % 2 == 1) {
            return merged[total / 2];
        }
        else {
            return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
        }
    }
};