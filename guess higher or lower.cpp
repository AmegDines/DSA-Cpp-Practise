class Solution {
public:
    int guessNumber(int n) {
        int l =1;
        int r = n;
        while(l<=r){
            int mid = l+((r-l) >> 1);
            int res = guess(mid);
            if(res == -1){
                r = mid - 1;
            }else if(res == 0)return mid;
            else{
                l = mid+1;
            }
        }
        return -1;
    }
};