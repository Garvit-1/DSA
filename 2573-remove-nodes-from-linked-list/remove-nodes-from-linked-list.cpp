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
    ListNode* removeNodes(ListNode* head) {
        if(!head) return NULL;
        vector<int> v;
        vector<int> ans;
        ListNode* curr=head;

        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }

        int curmax=v[v.size()-1];
        ans.push_back(curmax);
        for(int i=v.size()-2;i>=0;i--){
            if(v[i]>=curmax){
                curmax=v[i];
                ans.push_back(v[i]);
            }
        }
        for(auto a:ans) cout<<a;
        ListNode* cur=head;
        for(int i=ans.size()-1;i>=0;i--){
            cur->next=new ListNode(ans[i]);
            cur=cur->next;
        }
        return head->next;
    // return head;


        // ListNode* a=new ListNode();
        // ListNode* t=a;
        // while(head!=NULL&&head->next!=NULL){
        //     if(head->val==head->next->val){
        //         t->next=new ListNode(head->next->val);
        //         t=t->next;
        //         t->next=new ListNode(head->val);
        //         t=t->next;
        //         head=head->next;
        //     }
        //     else if(head->val<head->next->val){
        //         t->next=new ListNode(head->next->val);
        //         t=t->next;
        //     }
        //         head=head->next;
        // }
        // return a->next;
    }
};