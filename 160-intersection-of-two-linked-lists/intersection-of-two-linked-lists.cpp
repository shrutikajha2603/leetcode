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
        int lenA = getLength(headA);
        int lenB = getLength(headB);

        // Move the longer list's head to the equivalent starting position
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }

        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }

        // Move both pointers until they meet or reach the end
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }

        return headA; // This is the intersected node or NULL if there's no intersection
    }

private:
    int getLength(ListNode *node) {
        int length = 0;
        while (node) {
            length++;
            node = node->next;
        }
        return length;
    }
};
