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
        
        //optimal
        ListNode* curr1=head;
        ListNode* left=new ListNode(0);
        ListNode* l=left;

        ListNode* right=new ListNode(0);
        ListNode* r=right;

        vector<int> v;
        while(curr1){
        if(curr1->val<x){
        left->next=curr1;
        left=left->next;
        }
        else{
        right->next=curr1;
        right=right->next;
        }
        curr1=curr1->next;
        }
        left->next=r->next;
        right->next=NULL;        
        return l->next;
    }
};