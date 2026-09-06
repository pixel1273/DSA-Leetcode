
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        int sz=1;
        while(temp->next!=NULL){
            temp=temp->next;
            sz++;
        }
         k=k%sz;
       if(k==0) return head;
       temp->next=head;
       
      ListNode* slow=head;
            for(int i=1;i<sz-k;i++){
                slow=slow->next;
            }
            temp=slow->next;
        slow->next=NULL;
        head=temp;
        return head;
    }
};
