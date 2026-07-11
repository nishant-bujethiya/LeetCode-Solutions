class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int count = 0;
        while(i <= j){
            if(nums[i] == 0){
                count++;
                i++;
            }
            else if(nums[j] == 0){
                swap(nums[i], nums[j]);
                count++;
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        i = count;
        j = n - 1;
        while(i <= j){
            if(nums[i] == 1){
                i++;
            }
            else if(nums[j] == 1){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
    }
};