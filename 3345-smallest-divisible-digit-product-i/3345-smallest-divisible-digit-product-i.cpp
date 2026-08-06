class Solution {
public:
    int smallestNumber(int n, int t) {
        int current = n;
        while (true) {
            vector<int> digit;
            int temp = current;
            while (temp != 0) {
                int rem = temp % 10;
                digit.push_back(rem);
                temp /= 10;
            }
            int product = 1;
            for (int i = 0; i < digit.size(); i++) {
                product *= digit[i];
            }
            if (product % t == 0) {
                return current;
            }
            current++;
        }
    }
};