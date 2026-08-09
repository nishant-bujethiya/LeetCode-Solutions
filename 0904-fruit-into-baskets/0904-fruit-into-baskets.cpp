class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int siz = fruits.size();
        int low = 0;
        int res = 0;
        unordered_map<int, int> f;
        for (int high = 0; high < siz; high++) {
            f[fruits[high]]++;
            while (f.size() > 2) {
                f[fruits[low]]--;
                if (f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                }
                low++;
            }
            if (f.size() <= 2) {
                int len = high - low + 1;
                if (len > res) {
                    res = len;
                }
            }
        }
        return res;
    }
};