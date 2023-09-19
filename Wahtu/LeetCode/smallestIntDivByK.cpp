class Solution {
public:
    int smallestRepunitDivByK(int k) {
        for(int i = 0, n = 1; n <= k; n++){
            if((i = (i * 10 + 1) % k) == 0) return n;
        }
        return -1;
    }
};
