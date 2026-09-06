
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) { 
        if(head==NULL || head->next==NULL) return head;       
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL){
            if(slow->val==fast->val){
               fast=fast->next; 
            }
            else{
                slow->next=fast;
                slow=fast;
                fast=fast->next;
            }
        }
        if(fast==NULL) slow->next=NULL;
        return head;

    }
};
