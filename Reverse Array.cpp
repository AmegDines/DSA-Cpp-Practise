class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int s = arr.size();
        int temp,k=1;
        for(int i =0;i<s/2;++i){
            temp = arr[i];
            arr[i] = arr[s-1-i];
            arr[s-1-i] = temp;
        }
    }
};