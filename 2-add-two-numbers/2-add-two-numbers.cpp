/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy= new ListNode(0) , *curr=dummy;
        int carry=0;
        while(l1!=NULL or l2!=NULL){
            int a=l1!=NULL?l1->val:0 ;
            int b=l2!=NULL?l2->val:0;
            int digSum=a+b+carry;
            int digit = digSum%10;
            carry=digSum/10 ; 
            //cout<<digSum<<" "<<carry<<endl;
            ListNode *temp = new ListNode(digit);
            curr->next=temp; 
            curr=curr->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        if(carry){
            ListNode *temp = new ListNode(carry);
            curr->next=temp; 
        }
        return dummy->next;
    }
};