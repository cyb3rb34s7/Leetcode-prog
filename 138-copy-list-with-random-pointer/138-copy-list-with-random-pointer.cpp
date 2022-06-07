class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node *curr=head, *front=head;
        while(curr!=NULL){
            front=front->next;
            Node *temp = new Node(curr->val);
            curr->next=temp ; 
            temp->next = front;
            curr=front;
            
        }
        curr=head;
        while(curr!=NULL){
            if(curr->random!=NULL)
                curr->next->random = curr->random->next;
            curr=curr->next->next;
        }
        Node *dummy = new Node(0); 
        curr=head;
        Node *itr = dummy; 
        while(curr!=NULL){
            front = curr->next->next;
            itr->next= curr->next;
            curr->next = front;
            itr=itr->next;
            curr=curr->next;
        }
        
        return dummy->next;
        
        
    }
};