/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tempB = headB;
        
        while(tempB){
            ListNode *tempA = headA;
            
            while(tempA){
                if(tempA == tempB) return tempA;
                tempA = tempA->next;    
            }
            
            tempB = tempB->next;
        }
        return NULL;
    }
};