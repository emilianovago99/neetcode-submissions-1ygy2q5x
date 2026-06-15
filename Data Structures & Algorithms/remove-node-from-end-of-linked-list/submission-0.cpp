class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = head;
        
        for (int i = 0; i < n; i++) {
            if (fast == nullptr) return head; 
            fast = fast->next;
        }
        
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        
        delete nodeToDelete;
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};
