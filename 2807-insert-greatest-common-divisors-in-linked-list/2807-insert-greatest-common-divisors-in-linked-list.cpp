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
    int GCD(int a, int b) { return b == 0? a: gcd(b, a % b); }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int listSize = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            listSize++;
            temp = temp->next;
        }
        if(listSize == 1) return head;

        ListNode* curr = head;
        temp = head->next;

        while(temp != nullptr) {
           ListNode* gcd = new ListNode();
           gcd->val = GCD(curr->val, temp->val);
           curr->next = gcd;
           gcd->next = temp;
           curr = temp;
           temp = temp->next;
        }
        
        return head;
    }
};