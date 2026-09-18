class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v(2,-1);
        if(head->next->next==NULL) return v;
        ListNode* slow=head;
        ListNode* fast=slow->next;
        int c1=-1;
        int c2=-1;      
        int idx=2;
       int minD=INT_MAX;
        while(fast->next!=NULL){
            if((fast->val < fast->next->val && fast->val < slow->val) || (fast->val>fast->next->val && fast->val>slow->val)){
                if(c1==-1) {
                    c1=idx;
                }else{                    
                    minD=min(minD,idx-c2);
                }
                c2=idx;
            }
            slow=fast;
            fast=fast->next;
            idx++;
        }
        if(c1==c2){
            return v;
        }
        v[0]=minD;
        v[1]=c2-c1;    
       return v; 
    }
};
