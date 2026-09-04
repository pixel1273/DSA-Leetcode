
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int s1=0,s2=0;
        while(temp1!=NULL){
            s1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            s2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
       
        if(s1>s2){
            int s=s1-s2;
            for(int i=1;i<=s;i++){
                temp1=temp1->next;
            }
            while(temp1!=temp2){
               temp1=temp1->next;
               temp2=temp2->next;
            } 
            return temp1;           
        }
        else {
             int s=s2-s1;
            for(int i=1;i<=s;i++){
                temp2=temp2->next;
            }
          while(temp1!=temp2){
               temp1=temp1->next;
               temp2=temp2->next;
            } 
            return temp1;    
        }
        return NULL;
    }
};
