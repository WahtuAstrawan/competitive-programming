class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = 0, right = h.size() - 1, maxWater = 0;
        while(left < right){
            int currentWater = min(h[left], h[right]) * (right - left);
            maxWater = max(maxWater, currentWater);

            if(h[left] > h[right]) right--;
            else left++;
        }

        return maxWater;
    }
};
