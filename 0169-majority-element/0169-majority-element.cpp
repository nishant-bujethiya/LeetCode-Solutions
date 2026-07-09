// brute force

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i = 0; i < nums.size(); i++){
//             mp[nums[i]]++;
//         }
//         for(auto it : mp){
//             if(it.second > nums.size()/2){
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

// optimised approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        int maj = nums[0];
        for(int i=1;i<nums.size();i++){
            if(count == 0){
                maj = nums[i];
                count = 1;
            }else if(nums[i] == maj){
                count++;
            }else{
                count--;
            }
        }
    return maj;
    }
};
