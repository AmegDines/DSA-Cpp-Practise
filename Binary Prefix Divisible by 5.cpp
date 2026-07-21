class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int number = 0;
        vector<bool> result;
        for(int n :  nums){
            number  = (number*2)+n;
            result.push_back((number%5) == 0);
        }
        return result;   
    }
};
