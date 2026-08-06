// If I fill from the front, will I overwrite data I still need? ; this one is not the valid //approach

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int siz = nums1.size();
//         int i=0;
//         int j=0;
//         while(i<siz){
//             if(nums1[i]<=nums2[j]){
//                 i++;
//             }
//             if(nums1[i]>nums2[j]){
//                 int curr = nums1[i];
//                 nums1[i]= nums2[j];
//                 nums1[i+1]= curr;
//                 j++
//             }
//         }
//     }
// };

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        
        int j = n - 1;        
        int k = m + n - 1;   
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};