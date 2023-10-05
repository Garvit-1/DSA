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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode* prev,*nxt;
    prev=head;
    nxt=prev->next;
    if(nxt==NULL) return head;


    while(nxt!=NULL){
        int x=gcd(prev->val,nxt->val);
        prev->next=new ListNode(x);
        prev=prev->next;
        prev->next=nxt;
        prev=nxt;
        nxt=nxt->next;
    }

    return head;

    }
};