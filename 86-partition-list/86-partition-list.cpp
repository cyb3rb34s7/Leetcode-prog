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
    ListNode* partition(ListNode* head, int x) {
        ListNode *left = new ListNode(0) , *right=new ListNode(0);  
        ListNode* tailLeft = left , *tailRight = right ; 
        while(head!=NULL){
            if(head->val<x)
            {
               ListNode *tempL = new ListNode(head->val) ;
                tailLeft->next = tempL ; 
                tailLeft = tailLeft->next ;
            }  
            else
            {
                ListNode *tempR = new ListNode(head->val) ; 
                tailRight->next = tempR ; 
                tailRight =tailRight->next ; 
            }
            head=head->next ;
            
        }
        tailLeft->next = right->next ; 
        tailRight->next =NULL ;
        return left->next;
    }
};