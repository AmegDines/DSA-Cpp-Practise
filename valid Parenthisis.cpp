class Solution {
public:
    bool isValid(string s) {
        stack<int> stac;
        for(int i = 0;i<s.size();++i){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{' )stac.push(s[i]);
            else{
                if(stac.empty())return false;
                else if(stac.top()=='(' && s[i] == ')')stac.pop();
                else if(stac.top()=='[' && s[i] == ']')stac.pop();
                else if(stac.top()=='{' && s[i] == '}')stac.pop();
                else return false;
            }
            

        }
        if(stac.empty())return true;
        return false;
    }
};
