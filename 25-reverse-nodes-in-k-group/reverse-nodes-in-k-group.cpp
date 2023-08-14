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
    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if(!head) return NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        ListNode* temp = head;
        int count = 0;
        
        while (temp) {
            temp = temp->next;
            count++;
        }
        
        if (count < k) {
            return head; // If there are fewer nodes than k, return as is
        }
        
        int a=k;
        while(curr!=NULL && a--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;

    }
};