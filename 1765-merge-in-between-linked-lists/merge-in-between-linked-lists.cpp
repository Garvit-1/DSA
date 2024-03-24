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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1=list1;
        a--;
        b++;
        while(a){
            curr1=curr1->next;
            a--;
        }
        ListNode* temp=list1;
        while(b){
            temp=temp->next;
            b--;
        }
        curr1->next=list2;
        while(curr1->next!=NULL){
            curr1=curr1->next;
        }
        curr1->next=temp;
        
return list1;
        
    }
};