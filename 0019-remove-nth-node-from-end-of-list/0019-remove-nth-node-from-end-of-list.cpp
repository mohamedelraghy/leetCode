class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move fast pointer n nodes ahead
        for (int i = 0; i < n; i++) {
            if (fast == nullptr) {
                // Handle the case where n is greater than the list size
                return head;
            }
            fast = fast->next;
        }

        // Move both pointers until fast reaches the end
        while (fast != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the nth node from the end
        if (prev != nullptr) {
            prev->next = slow->next;
            delete slow;
        } else {
            // If prev is null, it means we are removing the head
            head = head->next;
            delete slow;
        }

        return head;
    }
};
