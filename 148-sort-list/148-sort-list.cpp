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
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next)
            return head ;
        
        ListNode *mid = getMid(head) ;
       
        ListNode *left = sortList(head) ;
        ListNode *right = sortList(mid) ;
        
        return merge(left,right) ; 
    }
    
    ListNode* getMid(ListNode* head){
        if(!head or !head->next) return head ;
        
        ListNode* slow=head ,*fast=head;
        
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next ;
            fast =fast->next->next ;
        }
        
        ListNode *temp = slow->next ;
        slow->next=NULL ;
        return temp ; 

    }
    
    ListNode* merge(ListNode* a, ListNode *b){
        ListNode* dummy = new ListNode(0) ;
        ListNode* curr =dummy ;
        
        while(a!=NULL and b!=NULL){
            
            if(a->val < b->val){
                curr->next = a ;
                a=a->next;
            }
            else
            {
                curr->next = b ;
                b = b->next ;
            }
            curr=curr->next ;
        }
        if(a==NULL) curr->next = b ;
        else curr->next = a ;
        
        return dummy->next ;
    }
};