class Solution {
public:
    int binaryGap(int n) {
       int  ma = 0,pos = 0,prev = -1,dis;
       while(n>0){
        if((n&1) == 1){ 
            if(prev != -1){          
                dis = pos - prev;
                ma = max(dis,ma);
            }
            prev = pos;
        }
        pos++;
        n>>=1;
       }
       return ma;
    }
};
