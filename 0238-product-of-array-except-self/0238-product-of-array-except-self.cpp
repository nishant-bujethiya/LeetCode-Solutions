// o(n2) solution ; not applicable

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector <int> answer;
//         int n = nums.size();
//         int product;
//         for(int i = 0; i < n; i++) {
//             product = 1;
//             for(int j = 0; j < n; j++) {
//                 if(i != j) {
//                     product *= nums[j];
//                 }
//             }
//         answer.push_back(product);
//         }
//         return answer;
//     }
// };

// O(N) suffix prefix solution 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        // prefix product
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        //suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};
