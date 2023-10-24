class Solution {
public: int getXORSum(vector<int>& a, vector<int>& b) {
    int res = 0, xa = accumulate(begin(a), end(a), 0, bit_xor());
    for (auto n : b)
        res = res ^ (xa & n);
    return res;
 }
};
