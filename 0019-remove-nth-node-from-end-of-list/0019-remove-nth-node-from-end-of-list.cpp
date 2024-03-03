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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int listSize = 0;
        while(temp != NULL) {
            listSize++;
            temp = temp->next;
        }
        
        temp = head;
        int pos = listSize - n;
        
        if(!pos) return head->next;
        
        ListNode* prev;
        
        for(int i = 0; i < pos ; i++) {
            prev = temp;
            temp = temp->next;
        }
        
        prev->next = temp->next;
        temp = NULL;
        
        return head;
    }
};