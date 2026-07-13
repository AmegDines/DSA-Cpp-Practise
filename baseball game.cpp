class Solution {
public:
    int calPoints(vector<string>& operations) {
        int top;
        int sum = 0;
        stack<int> stac;
        for(string i :  operations){
            if(i == "+"){
                top = stac.top();
                stac.pop();
                sum = top + stac.top();
                stac.push(top);
                stac.push(sum);
            }
            else if(i == "D"){
                sum = stac.top()*2;
                stac.push(sum);
            }
            else if( i == "C")stac.pop();
            else {
                stac.push(stoi(i));
            }
        }
        sum = 0;
        while(!stac.empty()){
            sum += stac.top();
            stac.pop();
        }
        return sum;
    }
};
