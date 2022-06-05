class Solution {
public:
    ListNode * reverseList(ListNode *head){
        ListNode *prev=NULL ,*curr=head ,*temp;
        while(curr!=NULL){
            temp=curr->next ;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        int cnt=0;
        ListNode *curr=head, *fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
            curr=curr->next ,fast=fast->next->next;
        
        curr->next = reverseList(curr->next);
        curr=curr->next;
        //comparing ll;
        while(curr!=NULL){
            if(head->val==curr->val)
            {
                head=head->next ; curr=curr->next;
            }
            else
                return false;
        }
        return true;
    }
};