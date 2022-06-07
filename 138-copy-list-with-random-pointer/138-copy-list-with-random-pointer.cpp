class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* ,Node*> mp;
        Node *curr=head ;
        while(curr!=NULL){
            Node* temp = new Node(curr->val);
            mp[curr] = temp;
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            mp[curr]->next = mp[curr->next];
            mp[curr]->random =mp[curr->random];
            curr=curr->next;
        }
        return mp[head];
        
    }
};