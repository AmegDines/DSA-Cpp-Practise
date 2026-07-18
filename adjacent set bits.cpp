class Solution {
  public:
    bool adjacentBits(int n) {
        while(n>0){
            if((n&1) && (n>>=1)&1)return true;
            n>>=1;
        }
        return false;
    }
};
