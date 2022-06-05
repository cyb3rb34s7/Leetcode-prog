class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode *dummy = new ListNode(0);
        dummy->next=head;
        unordered_map<ListNode* , int> mp ;
        while(dummy!=NULL){
            if(mp.find(dummy->next)==mp.end())
                mp[dummy->next]=0;
            else
                return dummy->next;
            dummy=dummy->next;
        }
        return NULL;
        
    }
};