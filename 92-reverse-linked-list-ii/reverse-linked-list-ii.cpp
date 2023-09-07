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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v;
        int i=0;
        ListNode* curr=head;
        while(i<left-1){
            curr=curr->next;
            i++;
        }
        while(i<right){
            v.push_back(curr->val);
            i++;
            curr=curr->next;
        }
        i=0;
        curr=head;
        while(i<left-1){
            curr=curr->next;
            i++;
        }
        int x=v.size();
        while(i<right){
            curr->val=v[x-1];
            x--;
            curr=curr->next;
            i++;
        }
        return head;

    }
};