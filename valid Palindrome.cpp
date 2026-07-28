class Solution {
public:
    bool isPalindrome(string s) {
        string result1 = "";
        string result2 = "";
        for(char c:  s){
            if(isalnum(c)){
                result1.push_back(tolower(c));
                result2.push_back(tolower(c));
            }
        }
        reverse(result2.begin(),result2.end());
        if(result1 == result2)return true;
        else return false;
    }
};
