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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* curr=ans;
        int sum=0,c=0;
        while(l1 && l2){
            sum=l1->val+l2->val+c;
            c=sum/10;
            sum%=10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;
            l2=l2->next;
            
        }
        while(l1){
            sum=l1->val+c;
            c=sum/10;
            sum%=10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l1=l1->next;

        }
        while(l2){
            sum=l2->val+c;
            c=sum/10;
            sum%=10;
            curr->next=new ListNode(sum);
            curr=curr->next;
            l2=l2->next;
        }
        if(c!=0) curr->next=new ListNode(c);
        return ans->next;
    }
};