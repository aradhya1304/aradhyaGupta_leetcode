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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;
        ListNode*p=head;
        ListNode*q=head->next;
        ListNode*head1=q;
        while(q && q->next)
        {
            p->next=q->next;
            p=p->next;
            q->next=q->next->next;
            q=q->next;
        }
        p->next=head1;
        return head;
        
    }
};