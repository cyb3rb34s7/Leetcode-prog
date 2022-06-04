
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy= new ListNode(0) , *curr=dummy;
        int carry=0;
        while(l1!=NULL or l2!=NULL){
            int a=l1!=NULL?l1->val:0 ;
            int b=l2!=NULL?l2->val:0;
            int digSum=a+b+carry;
            carry=digSum/10 ; 
            curr->next=new ListNode(digSum%10); 
            curr=curr->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        if(carry){
            curr->next=new ListNode(carry);
        }
        return dummy->next;
    }
};