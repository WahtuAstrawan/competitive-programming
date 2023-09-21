class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeNums;
        double output;
        mergeNums.insert(mergeNums.end(), nums1.begin(), nums1.end());
        mergeNums.insert(mergeNums.end(), nums2.begin(), nums2.end());
        sort(mergeNums.begin(), mergeNums.end());
        if(mergeNums.size() % 2 == 0){
            output = (mergeNums[mergeNums.size() / 2 - 1] + mergeNums[mergeNums.size() / 2])/2.0; 
        }else{
            output = mergeNums[floor(mergeNums.size() / 2)];
        }
        return output;
    }
};
