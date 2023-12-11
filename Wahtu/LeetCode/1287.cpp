class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cek = arr.size()/4;
        for(int i = 0; i < arr.size() - 1; i++){
            int temp = 1;
            for(int j = i + 1; j < arr.size(); j++){
                if(arr[i] == arr[j]) temp++;
                else if(arr[i] != arr[j]) break;
                
                if(temp > cek) return arr[i];
            }
        }
        return 1;
    }
};
