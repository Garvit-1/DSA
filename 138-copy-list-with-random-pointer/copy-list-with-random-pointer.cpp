/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> mp;
        Node* curr=head;
        Node* nw=new Node(0);
        Node* cur=nw;
        while(curr){
            cur->next=new Node(curr->val);
            cur=cur->next;
            mp[curr]=cur;
            curr=curr->next;
        }
        curr=head;
        cur=nw->next;
        while(curr){
            cur->random=mp[curr->random];
            cur=cur->next;
            curr=curr->next;
        }
        return nw->next;

    }
};