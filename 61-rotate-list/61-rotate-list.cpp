class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *fast=head ,*slow=head ;
        int cnt=0; 
        while(slow!=NULL){
            cnt++ ;
            slow=slow->next;
        }
         if(cnt==0 or k%cnt==0)
            return head;
        if(k>cnt)
            k = k%cnt;
       
        slow=head;
        while(k--){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            slow=slow->next , fast=fast->next ;
        }
        ListNode *temp = slow->next;
        fast->next=head;
        slow->next=NULL;
        return temp;
    }
};