class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        bool re = true;
        for (int i=0;i<(arr.size()-1);++i){
            if(arr[i]>arr[i+1]){
                re =false;
                break;
            }
        }
        return re;
    }
};