
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(0); 
         dummy->next=head;
        ListNode* l=dummy;
        ListNode* r=dummy;
       
        for(int i=1;i<left;i++) l=l->next;
        for(int i=1;i<=right+1;i++) 
            r=r->next; 
       
        ListNode* prev=r;
        ListNode* curr=l->next;
        ListNode* n=NULL;
        for(int i=1;i<=right-left+1;i++){
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        l->next=prev;
        return dummy->next;      
    }
};
