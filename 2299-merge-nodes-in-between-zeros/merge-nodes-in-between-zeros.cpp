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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* curr1=head;
        ListNode* curr2=head->next;
        int sum=0,i=0;
        while(curr2!=NULL){
            if(curr2->val==0){
                i++;
                curr1->val=sum;
                curr1=curr1->next;
                sum=0;
            }
                sum+=curr2->val;
                curr2=curr2->next;
        }
        curr1=head;
        while(i-1){
        curr1=curr1->next;
        i--;
        }
        curr1->next=NULL;
        return head;

        
    }
};