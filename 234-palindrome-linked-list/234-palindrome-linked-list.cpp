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
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head, *fast = head ;
        
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        ListNode *curr = slow->next, *prev = NULL ,*nextt ; 
        slow->next =NULL ;
        while(curr!=NULL){
            
            nextt = curr->next ;
             curr->next = prev ;
            prev = curr ;
            curr= nextt ;
        }
        
       curr = head ; 
       
        
        while(curr!=NULL and prev!=NULL){
            if(curr->val!=prev->val)
                return false;
            curr=curr->next ;
            prev = prev->next ;
        }
        return true;
    }
};