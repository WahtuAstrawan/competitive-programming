class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = 0;
        for (int i = 1; i <= n; i++)
            totalsum += i;

        int presum = 0;

        for (int i = 1; i <= n; i++) {
            presum += i;
            if ((totalsum - presum + i) == presum)
                return i;
        }
        return -1;
    }
};
