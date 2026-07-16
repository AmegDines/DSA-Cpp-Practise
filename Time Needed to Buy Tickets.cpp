class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count=  0;
        bool re  =  true;
        while(re){
            for(int i  = 0;i < tickets.size();++i){
                if(tickets[i]>0){
                    tickets[i]--;
                    count++;
                }
                if(tickets[k] == 0){
                    re = false;
                    break;
                }
            }
        }
        return count;    


    }
};
