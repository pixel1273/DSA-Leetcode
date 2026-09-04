
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int t=0;
        while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
            if(fast==slow) {
            t=1;
            break;
            }
        }
        if(t==1){
            ListNode* temp=head;
            while(temp!=slow){
                temp=temp->next;
                slow=slow->next;
            }
            return slow;
        }
        return NULL;
    }
};
