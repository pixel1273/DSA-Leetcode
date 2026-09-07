
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
          ListNode a(0); 
          ListNode b(0);   
          ListNode* temp1 = &a;
          ListNode* temp2 = &b;
          ListNode* temp = head;
        while(temp!=NULL){
            if((temp->val)>=x){
                temp2->next=temp;
                temp=temp->next;
                temp2=temp2->next;
            }
            else{
                 temp1->next=temp;
                temp=temp->next;
                temp1=temp1->next;
            }           
        }
        temp1->next=b.next;
        temp2->next=NULL;
return a.next;
    }
};

