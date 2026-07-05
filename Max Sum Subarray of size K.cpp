class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int win = 0;
        for(int i =0;i<k;++i){
            win+=arr[i];
        }
        int maxs = win;
        for(int i = k;i<arr.size();++i){
            win+=arr[i];
            win-=arr[i-k];
            maxs = max(win,maxs);
        }
        return maxs;
    }
};