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
// int gcd(int a,int b){
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0) return i; 
//     }
//     return 1;
// }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        while(curr->next){
            int a=__gcd(curr->val,curr->next->val);
            ListNode* temp=new ListNode(a);
            temp->next=curr->next;
            curr->next=temp;
            curr=temp->next;
        }
        return head;
    }
};