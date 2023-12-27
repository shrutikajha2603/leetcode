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
        if(head == NULL) return NULL;
        ListNode *start = head, *dval = head;
        if(start->next==NULL && n==1) return NULL;
        while(n){
            start=start->next;
            n--;
        }
        if(start == NULL) return dval->next;
        while(start->next){
            start = start->next;
            dval = dval->next;
        }
        dval->next = dval->next->next;
        return head;
    }
};