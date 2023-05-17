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
    int pairSum(ListNode* head) {
      vector<int> elm;
      ListNode* temp = head;
      
      while(temp) {
        elm.push_back(temp->val);
        temp = temp->next;
      }
      
      int maxSum = 0;
      for(int i = 0, j = elm.size() -1; i < elm.size() / 2; i++, j--) {
        maxSum = max(maxSum, elm[i] + elm[j]);  
      }

      return maxSum;
    }
};