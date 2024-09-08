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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool dfs(TreeNode* node, ListNode* head) {
        if(!head) return true; // all nodes in the list matched
        if(!node) return false; // Reached end of tree without matching  all node
        if(node->val != head->val) return false; // Value mismatch
        return dfs(node->left, head->next) || dfs(node->right, head->next);
    }

    bool checkPath(TreeNode* node, ListNode* head) {
        if(!node) return false;
        if(dfs(node, head)) return true; // If a mathcing path is found 
        return checkPath(node->left, head) || checkPath(node->right, head);
    }

public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root) return false;
        return checkPath(root, head);
    }

};