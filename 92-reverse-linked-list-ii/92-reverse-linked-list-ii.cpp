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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head->next)
            return head;
        ListNode* dummy = new ListNode(0) ;
        
        dummy->next = head ; 
        ListNode *leftPart = dummy ;
        
        for(int i=1;i<left;i++){
            leftPart=leftPart->next ; 
            
        }
       
        ListNode* newHead = leftPart->next , *curr = newHead,*prev=NULL, *nextt;
        
        int diff =  right-left +1  ; 
        
        while(diff--){
            nextt = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = nextt;
          
        }
       
         
        leftPart->next = prev ; 
        newHead->next = nextt;
        
        return dummy->next;
    }
};