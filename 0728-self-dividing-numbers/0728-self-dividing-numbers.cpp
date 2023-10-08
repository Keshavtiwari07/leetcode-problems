class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right);
};

vector<int> Solution::selfDividingNumbers(int left, int right) {
    int i, found, num, d;
    vector<int> vec;
    for (i = left; i <= right; ++i) {
        for (found = 0, num = i; num != 0; num/=10) {
            d = num % 10;
            if (d == 0 || i % d != 0) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            vec.emplace_back(i);
        }
    }
    return vec;
}
