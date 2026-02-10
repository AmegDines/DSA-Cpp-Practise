class Solution{
    public:
    string firstRepChar(string&s){
        vector<bool> mp(26);
        for(char&ch : s){
            if(mp[ch-'a'] == true){
                return ch;
                ans.push_back(ch);
            }
            mp[ch - 'a'] = 1;
        }
    }
}