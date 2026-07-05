// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        int  n = arr.size();
        sort(arr.begin(),arr.end());
        int l  =0;
        int r = n-1;
        while(l<r){
            int sum = arr[l]+arr[r];
            if(sum == target)return true;
            else if(sum<target)l++;
            else r--;
        }
        return false;
    }
};  