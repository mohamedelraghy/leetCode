/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(root == nullptr) return res;

        traversalPostOrder(root, res);
        return res;
    }

    void traversalPostOrder(Node* currentNode, vector<int>& res) {
        if(currentNode == nullptr) return;

        for(Node* childNode : currentNode->children) {
            traversalPostOrder(childNode, res);
        }

        res.push_back(currentNode->val);
    }
};