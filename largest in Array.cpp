class Solution {
  public:
    int largest(vector<int> &arr) {
        int l=arr[0];
        for(int num : arr){
            if(l<num)l = num;
        }
        return l;
    }
    
};
