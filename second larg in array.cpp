class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int siz = arr.size();
        if(siz<2)return -1;
        int f = INT_MIN; 
        int s = INT_MIN; 
        for(int i = 0;i<siz;++i){
            if(arr[i]>f){
                s = f;
                f = arr[i];
            }
            else if(arr[i]<f && arr[i]>s){
                 s = arr[i];
            }
        }
        if(s == INT_MIN)return -1;
        return s;
    }
};