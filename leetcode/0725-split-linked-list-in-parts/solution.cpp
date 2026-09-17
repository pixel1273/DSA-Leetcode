
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int sz=0;
        ListNode* temp=head;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
        temp=head;
        vector<ListNode*> v(k);
        if(k>=sz){
            for(int i=0;i<k;i++){
                if(temp==NULL) v[i]=temp;
                else {
                    v[i]=temp;
                    temp=temp->next;    
                    v[i]->next=NULL;               
                }               
            }
            return v;
        }
        int d=sz/k;
        int r=sz%k;
        int n=0;
        while(temp!=NULL){
              v[n]=temp;
            if(r!=0){
                for(int j=1;j<=d;j++) temp=temp->next;
                ListNode* ptr=temp;
                temp=temp->next;
                ptr->next=NULL;             
                r--;
            }
            else{
                for(int j=1;j<d;j++) temp=temp->next;
                ListNode* ptr=temp;
                temp=temp->next;
                ptr->next=NULL;    
            }
          n++;  
        }
        
     return v;
    }
};
