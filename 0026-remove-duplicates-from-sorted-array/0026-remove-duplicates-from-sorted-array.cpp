// this solution becomes expensive as erase shifts all the elements so complexity becomes O(n2)

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i = 0;
//         int j = 1;
//         while(j < nums.size()) {
//             if(nums[i] == nums[j]) {
//                 nums.erase(nums.begin() + j);
//             }
//             else {
//                 i++;
//                 j++;
//             }
//         }
//         return nums.size();
//     }
// };

// optimised solution

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
       int n=nums.size();
       for(int j=1;j<n;j++){
           if(nums[j] != nums[i]){
               i++;
               nums[i]=nums[j]; 
           }
       }
    return i+1;
    }
};
