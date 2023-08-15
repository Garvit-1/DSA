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
        ListNode* curr1=head;
        vector<int> v;
        while(curr1 ){
        v.push_back(curr1->val);
        curr1=curr1->next;
        }
        curr1=head;
        for(int i=0;i<v.size();i++){
            if(v[i]<x){
                curr1->val=v[i];
                curr1=curr1->next;
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>=x){
                curr1->val=v[i];
                curr1=curr1->next;
            }
        }
        return head;
    }
};