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

// ListNode* rot(ListNode* head){

// }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        vector<int> v;
        ListNode* curr=head;
        while(curr){
            v.push_back(curr->val);
            curr=curr->next;
        }
    
        k=k % v.size();
        while(k--){
                v.insert(v.begin(),v.back());
            v.pop_back();
        }
        curr=head;
        for(int i=0;i<v.size(),curr!=NULL;i++){
            curr->val=v[i];
            curr=curr->next;
    }
    return head;
    }
};