class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        vector<int> ans;
        for(int num : nums1)
            mp1[num]++;
        for(int num : nums2)
            mp2[num]++;
        for(auto x : mp1){
            if(mp2.find(x.first) != mp2.end()){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};