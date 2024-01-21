class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* x = new ListNode(); 
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* curr = x;  

        while (curr1 && curr2) {
            if (curr1->val <= curr2->val) {  
                curr->next = curr1;
                curr1 = curr1->next;
            } else {
                curr->next = curr2;
                curr2 = curr2->next;
            }
            curr = curr->next;
        }

        // Check if there are remaining nodes in either list
        if (curr1) {
            curr->next = curr1;
        } else if (curr2) {
            curr->next = curr2;
        }

        return x->next;  
    }
};
