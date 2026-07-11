// my approach : first sort all the zeroes then ones;

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         int j = n - 1;
//         int count = 0;
//         while(i <= j){
//             if(nums[i] == 0){
//                 count++;
//                 i++;
//             }
//             else if(nums[j] == 0){
//                 swap(nums[i], nums[j]);
//                 count++;
//                 i++;
//                 j--;
//             }
//             else{
//                 j--;
//             }
//         }
//         i = count;
//         j = n - 1;
//         while(i <= j){
//             if(nums[i] == 1){
//                 i++;
//             }
//             else if(nums[j] == 1){
//                 swap(nums[i], nums[j]);
//                 i++;
//                 j--;
//             }
//             else{
//                 j--;
//             }
//         }
//     }
// };

// using dutch national flag algorithm 
// using 3 pointers method ; low to sort zeroes;mid to sort ones; high to sort twos;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {   
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};