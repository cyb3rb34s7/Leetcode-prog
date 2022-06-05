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
        ListNode *curr=head;
        while(curr!=NULL)
        {
            curr=curr->next ; 
            cnt++; 
        }
        int mid= cnt%2==0 ? cnt/2 -1 : (cnt+1)/2 -1;
        curr=head;
        while(mid--){
            curr=curr->next;
        }
        
        curr->next = reverseList(curr->next);
        curr=curr->next;
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