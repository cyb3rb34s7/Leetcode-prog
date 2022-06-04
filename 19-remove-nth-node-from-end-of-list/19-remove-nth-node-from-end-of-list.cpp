class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast=head ,*slow=head;
        if(head==NULL or head->next==NULL)
            return NULL;
        while(n--){
            fast=fast->next;
            if(fast==NULL)
                return head->next;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *temp=slow->next; 
        slow->next=slow->next->next;
        delete(temp);
    return head;
    }
};