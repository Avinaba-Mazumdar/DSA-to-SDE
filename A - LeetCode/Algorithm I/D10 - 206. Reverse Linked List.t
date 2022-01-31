class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next) return head;
        
        ListNode *cur=head, *pre=nullptr, *nex=head->next;
        
        while(cur){
            cur->next = pre;
            pre = cur;
            cur = nex;
            if(nex) nex = nex->next;
        }
        
        return pre;
    }
};

//TC: O(N)
//SC: O(1)