class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.size()<num2.size()){
            swap(num1,num2);
        }
        int k =0;
        int i = sza -1;
        int j = szb - 1;
        int car = 0;
        string ans(max(sza,szb)+1,'0');
        for(int car = 0,i=sza-1;i>-1;--i){
            int sum =car;
            sum+=num1[i]- '0';
            sum+=(j>-1)?(num2[j]-'0'):0;
            int digitToStore = sum % 10;
            car = sum / 10;
            ans[k] = '0'+ digitToStore;
            --j,++k;
        }
        if(car){
            ans.back()  ='0' + car;
        }else{
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
    }
};