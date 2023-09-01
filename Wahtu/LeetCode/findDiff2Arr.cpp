class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        vector<int> sub;
        vector<vector<int>> ans;

        for(auto i: set1){
            if(set2.count(i) == 0) sub.push_back(i);
        }
        ans.push_back(sub);
        sub.clear();
        
        for(auto i: set2){
            if(set1.count(i) == 0) sub.push_back(i);
        }
        ans.push_back(sub);
        return ans;
    }
};
