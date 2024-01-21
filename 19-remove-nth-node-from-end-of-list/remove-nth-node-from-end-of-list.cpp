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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // n--;
        ListNode* curr=head,*curr1=head;
        while(n--){
            curr=curr->next;
        }
        if(!curr) return head->next;

        while(curr->next){
            curr=curr->next;
            curr1=curr1->next;
        }
        if(curr1 && curr1->next)
        curr1->next=curr1->next->next;

        return head;
    }
};