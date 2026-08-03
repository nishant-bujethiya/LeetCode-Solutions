class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (int i = 0; i < ransomNote.size(); i++) {
            mp1[ransomNote[i]]++;
        }
        for (int i = 0; i < magazine.size(); i++) {
            mp2[magazine[i]]++;
        }
        for (auto x : mp1) {
            if (mp2[x.first] < x.second)
                return false;
        }
        return true;
    }
};