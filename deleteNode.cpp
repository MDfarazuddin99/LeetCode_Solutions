class Solution {
public:
    void deleteNode(ListNode* node) {
        while((node->next)->next != nullptr ){
            node->val = (node->next)->val;
            node  = node->next;
        }
        node->val = (node->next)->val;
        node->next = nullptr;
        
    }
};