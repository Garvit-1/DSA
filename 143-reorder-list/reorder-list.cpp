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
    void reorderList(ListNode* head) {
        ListNode* nw=new ListNode();
        ListNode* slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *prev=NULL,*curr=slow,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev;
        while (secondHalf->next) {
            ListNode* temp1 = firstHalf->next;
            firstHalf->next = secondHalf;
            firstHalf = temp1;

            ListNode* temp2 = secondHalf->next;
            secondHalf->next = firstHalf;
            secondHalf = temp2;
        }
        // firstHalf->next = nullptr;
    }
};