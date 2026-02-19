class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i =0;i<n-2;++i){
            int le = i+1;
            int ri = n-1;
            while(le<ri){
                int sum = arr[i]+arr[le]+arr[ri];
                if(sum==target)return true;
                else if(sum<target)le++;
                else ri--;
            }
        }
        return false;
    }
};