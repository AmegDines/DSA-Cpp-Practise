class Solution {
public:
typedef ListNode* ln;
void reverse(ln l,ln r){
    ln pre  = nullptr;
    ln cur = l;
    while(cur){
        ln nxt = cur->next;
        cur->next = pre;
        pre = cur;
        cur = nxt;
    }
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ln finalh = nullptr;
        ln endp = nullptr;
        ln cu = head;
        ln cuseg = head;
        int cou = 0;
        while(cu){
            ++cou;
            if(!(cou%k)){
                finalh = finalh? finalh:cu;
                ln nextse = cu->next;
                reverse(cuseg,cu);
                endp->next = cu;
                cuseg->next = nextse;
                endp = cuseg;
                cu = cuseg;
                cuseg = nextse;
            }else{
                cu = cu->next;
            }
        }
        return finalh;
    }
};