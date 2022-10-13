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
    static void deleteNode(ListNode* node) {
      delete std::exchange(*node,*node->next).next;
    }
};